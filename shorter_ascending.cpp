#include<iostream>
using namespace std;
int main()
{
//que-8-->  if an array is shorted in ascending order
    int a[5]={2,1,3,5,4};
    // for(int i=0; i<5; ++i){
    //     if(a[i]>a[i+1]){
    //         cout<<"Not Ascending order";
    //         break;
    //     }
    // }
    int temp;
    for (int i= 0; i<5; i++){
        for(int j=i+1; j<5; ++j){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        cout<<"After shored Values in ascending order:"<<a[i];
        break;
    }
    
    return 0;
}