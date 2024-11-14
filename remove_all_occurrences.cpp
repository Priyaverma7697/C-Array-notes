#include<iostream>
using namespace std;
int main()
{
//que-13--> Remove all occurrences of a specific element from an array.
int a[5]={1,2,3,2,1};
int target=2, index=0;
for(int i=0; i<5; ++i){
    if(a[i]!=target){
        a[index++]=a[i];
        cout<<a[i];
    }
}



    return 0;
}