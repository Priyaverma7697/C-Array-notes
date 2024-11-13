#include <iostream>
using namespace std;
int main(){
//Que-5-->Find duplicate value
int a[5]={1,2,3,2,5};
for(int i=0; i<5; ++i){
    for(int j=i+1; j<5; ++j){
        if(a[i]==a[j]){
            cout<<"Duplicate value is: "<<a[i];
        }
    }
}

}
