// Char
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a,c;
    cin>>a;
    int b = int(a);
        if(b>=65 && b<97){
           c = a+32;
            cout<<c;
        }else{    
        c = a-32;
            cout<<c;
        }
   
}
