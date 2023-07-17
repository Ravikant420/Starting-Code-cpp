#include <bits/stdc++.h>
using namespace std;
bool prime(int n);
int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    prime(n);
    if(prime(n)){
        cout<<n<< " is a prime number";
    }
    else{
        cout<<n<<" is not a prime numaber";
    }

}

bool prime(int n){
    for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
    }
    }
    return true;
}