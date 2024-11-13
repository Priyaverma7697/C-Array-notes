#include <iostream>
using namespace std;
int main(){
// que-2-->Find minimum and maximum number in array
int n=5;
int a[]={1,2,3,4,5};
int min=a[0], max=a[0];
for(int i=0; i<n; ++i){
    if(a[i]>max){
        max=a[i];
    }
    else if (a[i]<min)
    {
        a[i]=min;
    }
    
}
cout<<"maximum number is : "<<max<<endl;
cout<<"minimum number is : "<<min<<endl;
}
