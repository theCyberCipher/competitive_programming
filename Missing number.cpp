#include<bits/stdc++.h>

using namespace std;

int main(){
int m;
cin>>m;
int sum=0;
for(int i=0;i<m-1;i++){
	int n;
	cin>>n;
	sum+=n;
}
int total_sum=0;
for(int i=1;i<=m;i++){
	total_sum+=i;
}
cout<<total_sum-sum;

	return 0;
}