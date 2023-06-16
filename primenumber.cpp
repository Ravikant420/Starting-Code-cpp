//using function print all prime numbers between two given numbers
#include<iostream>
using namespace std;
int prime(int a,int b);
int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
}
int prime(int a,int b){
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
}