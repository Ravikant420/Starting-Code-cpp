#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[n];
    //cout<<"Enter the number of elemets in an array:- ";
    cin>>n;
    //cout<<"enter the elements in an array "<< endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+a[j];
        }
     cout<<sum<<endl;
    }
  return 0;  
}
