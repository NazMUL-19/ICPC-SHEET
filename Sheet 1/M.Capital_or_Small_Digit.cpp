#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;
    int b = int(a);         //Type casting
    if(b>=65 && b<=122){
        if(b>=65 && b<97){
            cout<<"ALPHA\nIS CAPITAL";
        }else{
            cout<<"ALPHA\nIS SMALL";

        }
    }else{
        cout<<"IS DIGIT";
    }  
}
