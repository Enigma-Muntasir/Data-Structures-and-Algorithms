#include<bits/stdc++.h>
using namespace std;
int ls(int *a, int n, int key)

{
   int i=0,f=-1;
    while(i<n && a[i]!=key)
    
{
        i++;
    }
    if(a[i]==key)
    {
        f=i;
    }
    return f;
}


int main()


{
     int n,key;
     cin>>n;
     int a[n];
     for (int i=0;i<n;i++)
     {
        cin>>a[i];

     }
     cin>>key;
     cout<<ls(a,n,key);

}