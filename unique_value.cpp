#include<iostream>
using namespace std;
int main(){
//Que-6-->Find unique  value
    int a[5]={1,2,1,2,5};
    for(int i=0; i<5; ++i){
        bool unique=true;
        for(int j=0; j<5; ++j){
            if(i!=j && a[i]==a[j]){
                unique=false;
            }
        }
    if(unique){
        cout<<"Unique value is: "<<a[i];
    }
    }
    return 0;
}