#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    int arr[n];
    cout<<"enter " <<n <<" numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the number to be searched :- ";
    cin>>key;
    cout<<"number are at ";
    cout<<linearsearch(arr,n,key);
    cout<<" position ";
}
//linearsearch time complexity O(n)