#include<iostream>
using namespace std;
int main()
{
//que-15--> Find the kth  largest element in an array
int a[]={19,20,21,22,23};
int k=3;
int n=5;
int temp;
for(int i=0; i<k; ++i){
    for(int j=i+1; j<n; ++j){
        if(a[j]>a[i]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<a[i]<<endl;
}








    return 0;
}