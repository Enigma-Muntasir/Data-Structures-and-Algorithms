#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char str[MAX];
    int length;
} String;

void create(String *s, const char *text) {
    strcpy(s->str, text);
    s->length = strlen(text);
}

void display(String s) {
    printf("%s\n", s.str);
}

int length(String s) {
    return s.length;
}

void substring(String s, int start, int len, String *result) {
    strncpy(result->str, s.str + start, len);
    result->str[len] = '\0';
    result->length = len;
}

int match(String s, const char *pattern) {
    char *p = strstr(s.str, pattern);

    if (p == NULL)
        return -1;

    return p - s.str;
}

void insert(String *s, int pos, const char *text) {
    int len = strlen(text);

    if (pos < 0 || pos > s->length ||
        s->length + len >= MAX)
        return;

    memmove(s->str + pos + len,
            s->str + pos,
            s->length - pos + 1);

    memcpy(s->str + pos, text, len);

    s->length += len;
}

void deleteString(String *s, int pos, int len) {
    if (pos < 0 || pos >= s->length)
        return;

    if (pos + len > s->length)
        len = s->length - pos;

    memmove(s->str + pos,
            s->str + pos + len,
            s->length - pos - len + 1);

    s->length -= len;
}

void replace(String *s, const char *old, const char *newText) {
    int pos = match(*s, old);

    if (pos == -1)
        return;

    deleteString(s, pos, strlen(old));
    insert(s, pos, newText);
}

int main() {
    String s, sub;

    create(&s, "Sylhet Engineering College");

    printf("Original: ");
    display(s);

    printf("Length: %d\n", length(s));

    substring(s, 7, 11, &sub);
    printf("Substring: ");
    display(sub);

    printf("Match position: %d\n", match(s, "Engineering"));

    insert(&s, 26, ", Sylhet");
    printf("After Insert: ");
    display(s);

    deleteString(&s, 19, 26);
    printf("After Delete: ");
    display(s);

    replace(&s, "Engineering", "University of Engineering & Technology");
    printf("After Replace: ");
    display(s);

    return 0;
}