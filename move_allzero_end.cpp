#include<iostream>
using namespace std;
int main()
{
//que-11--> Move all zero elements to end of the array	
//1st way to move zero-->
int a[]={1,0,2,0,3};
int n=5, index=0, temp;
for(int i=0; i<n; ++i){
    if(a[i]!=0){
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
        index++;
    }
}
for(int i=0; i<n; ++i){
    cout<<a[i];
}
//second way to move zero
int a[]={1,0,2,0,3};
int index=0, temp, n=5;
for(int i=0; i<n; ++i){
    if(a[i]!=0){
    a[index++]=a[i];
    }
}
while(index<n){
    a[index++]=0;
}
for(int i=0; i<n; ++i){
    cout<<a[i];
}

    return 0;
}