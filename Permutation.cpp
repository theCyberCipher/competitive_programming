#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num==3||num==2){
        cout<<"NO SOLUTION";
        return 0;
    }
    int temp=num;
    int a=2,b=1;
    while(temp>0){
        temp--;
        if(a<=num){
            cout<<a<<" ";
            a+=2;
            continue;
        }
        else {
            cout<<b<<" ";
            b+=2;
            
        }
        
    }


    return 0;
}