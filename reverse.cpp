#include <iostream>
using namespace std;
int main(){
//que-3 Reverse array by Swapping 1st mathod
int n=5, temp;
int a[]={1,2,3,4,5};
for(int i=0; i<n/2; ++i){
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
}
for(int i=0; i<n; ++i){
    cout<<a[i];
}

}
