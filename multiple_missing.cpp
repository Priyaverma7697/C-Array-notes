#include<iostream>
using namespace std;
int main()
{
// Find the multiple missing values in an array
int a[]={3,5,1,4,7,9};
int n=6;
int temp;
for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
int index=0;
for(int i=0; i<5; ++i){
    index=a[i+1];
    for(int j=a[i]+1; j<index; ++j){
        cout<<j<<endl;
    }
}

    return 0;
}