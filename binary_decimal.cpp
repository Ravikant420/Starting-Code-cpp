#include<iostream>
#include<cmath>
using namespace std;

int decimal(int n){ 
    int sum =0;
    int i=0;
    int k;
    while(n>0){
        int l = n%10;
        k=2^i;
        sum=sum+l*(k);
        ++i;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout <<  decimal(n);
}