// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z){
    int b,c;
    int a = max(x , max(y,z));
    if(a==x){ 
        int b = y;
        int c = z;

    }
    else if(a==y){
        b=z;
        c=x;
    }
    else {
        b=x;
        c=y;
    }
    if ( a*a == b*b + c*c){
        return true;
    }
    else {
        return false;
    }

}
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(check(x,y,z)){
        cout<<"Pythagorian Triplet";
    }
    else{
        cout<<"Not Pythagorian Triplet";
    }
    return 0;
}

