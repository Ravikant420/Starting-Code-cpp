#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n <<" numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++){
        maxNo = max(maxNo,arr[i]);
        // if(arr[i]>maxNo){
        //     maxNo=arr[i];
        // }
        minNo = min(minNo,arr[i]);
        // if(arr[i]<minNo){
        //     minNo=arr[i];
        // }
    }
    cout<<"Maximum No. are :- "<<maxNo<<endl<<"Minimum No. are :- "<<minNo;
    return 0;
}