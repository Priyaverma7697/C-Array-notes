#include<iostream>
using namespace std;
int main()
{
//que-10 check if an array is palindrome 
int a[]={1,2,3,2,1};
int n=5;
for (int i = 0; i <n/2; i++){
    if(a[i]!=a[n-i-1]){
        cout<<"Not palindrome";
    }
    else{ cout<<"Palindrome";}
    break;
}


    return 0;
}