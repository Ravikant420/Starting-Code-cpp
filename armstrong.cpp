#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int sum=0;
    int b=n;
    while(n>0){
        int l = n%10;
        sum += l*l*l;
        n=n/10;
    }
    // for(;n>0;n=n/10){
    //     int l = n%10;
    //     a=a+ (l*l*l);
    // }
    cout<<sum<<endl;

    if(sum==b) {
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"NOT armstrong number"<<endl;
    }
    return 0;
}