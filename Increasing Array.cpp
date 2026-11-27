#include<bits/stdc++.h>
using namespace std;

int main(){
int array_size;
cin>>array_size;
int array[array_size];
for(int a=0;a<array_size;a++){
    cin>>array[a];

}
long long steps=0;
for(int j=0;j<array_size-1;j++){
    if(array[j+1]<array[j]){
        steps+=array[j]-array[j+1];
        array[j+1]=array[j];
    }


}
cout<<steps;
    return 0;
}