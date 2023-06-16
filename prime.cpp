#include<iostream>
using namespace std;
int main() {
    int n;
    int num;
    cin>>n;
    for(num=2;num<n;num++){
        if(n%num==0){
            cout<<"non prime"<<endl;
            break;
        }   
    }
    if(num==n){
        cout<<"prime"<<endl;
    } 
   return 0;
}