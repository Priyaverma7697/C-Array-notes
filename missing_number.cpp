#include<iostream>
using namespace std;
int main()
{
// que-12--> Find the missing number in an array of consecutive integer
int a[]={1,3,4,5};
int n=5;
int sum;
sum=n*((n+1)/2);
// sum=(a[0]+a[n-1])*(n+1)/2;
int second_sum=0;
for(int i=0; i<4; ++i){
    second_sum=second_sum+a[i];
}
int missing_number;
missing_number=sum-second_sum;
cout<<"Missing Number is : "<<missing_number;
    return 0;
}