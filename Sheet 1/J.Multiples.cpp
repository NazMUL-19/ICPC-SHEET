#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    if(a%b == 0){
        cout<<"Multiples"<<endl;
    }
    else if(b%a ==0){
            cout<<"Multiples"<<endl;
    }
    else{
        cout<<"No Multiples"<<endl;
    }
}
