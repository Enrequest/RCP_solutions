//My Cpp solution
#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main(){
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		int num = str[i]-'0';
		arr[num] = arr[num]+1;
	}
	bool cont = true,pp=true;
	int j=1;
	string res ="";
	while(cont){
		if(j<10 && arr[j]==0){
			cout<<j;
			cont = false;
		}else if(j>=10){
			j = -1;
			if(pp){
				int min = 1;
				for(int i=2;i<10;i++){
					if(arr[min]>arr[i]){
						min = i;
					}
				}
				cout<<min;
				arr[min]=arr[min]-1;
				pp = false;
			}else{
				int min = 0;
				for(int i=1;i<10;i++){
					if(arr[min]>arr[i]){
						min = i;
					}
				}
				cout<<min;
				arr[min]=arr[min]-1;
			}
		}
		j++;
	}
	cout<<res<<endl;
	return 0;
}
