#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>m[i][j];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int k;
			cin>>k;
			cout<<m[i][j]+k<<" ";
		}
		cout<<endl;
	}
}