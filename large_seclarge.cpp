#include <iostream>
using namespace std;
int main(){
// que-4-->Find the Largest and second large number:
int n=5;
int a[]={1,2,3,4,5};
int large=0, second_large=0;
for(int i=0; i<n; ++i){
    if(a[i]>large){
        large=a[i];
    }
}
cout<<"large number is: "<<large<<endl;
for(int i=0; i<n; ++i){
    if(a[i]>second_large && a[i]!=large){
        second_large=a[i];
    }
}
cout<<"Second large number is: "<<second_large;
}
