#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main(){
	double C,res = 0;
	int L;
	cin>>C>>L;
	for(int i=0;i<L;i++){
		double a,b;
		cin>>a>>b;
		res +=a*b;
	}
	res = res*C;
	printf("%.7f",res);
	return 0;
}
