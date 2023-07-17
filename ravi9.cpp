#include<iostream>
using namespace std;
int main(){
    int N;
        cin>>N;
        int S;
        cin>>S;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        
        for(int i=0;i<N;i++){
            int x =0;
            
            for(int j=i;j<N;j++){
            x=x+A[j];
            if(x==S){
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
            
            }
            if(x==S){
                break;
            }
        }
}