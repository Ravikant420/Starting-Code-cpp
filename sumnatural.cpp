//sum of n naturtal number
#include<iostream>
using namespace std;
int natural(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<natural(n)<<endl;
    return 0;
}