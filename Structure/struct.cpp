#include<bits/stdc++.h>
using namespace std ; 

struct student{ 
    int id ; 
    char n[100] ;
    float cg ; 
} ; 

int main (){

    int n ;

    cout << "Student no : " ;

    cin >> n; 

    struct student s[n] ;

    for ( int i = 0 ; i<n ;  ++i ){

        cout << "Enter student id " << i+1 << ": ";
        cin >> s[i].id ; 

        cout << "Enter student Name " << i+1 << ": " ;
        cin.ignore() ;// ignoring newline ;
        cin.getline(s[i].n , 100 ) ;

        cout << "Enter student CGPA " << i+1 << ": " ;
        cin >> s[i].cg ;

    }


    cout << "Yur Student data list : " << endl ; 

    for ( int i = 0 ; i<n ; ++i ){

    cout << "Id " << i+1 << ": " <<  s[i].id << endl  ; 

    cout << "Name " << i+1 << ": " <<  s[i].n << endl  ; 

    cout << "CGPA " << i+1 << ": " <<  s[i].cg << endl  ; 

    }
    
    return 0 ; 
}