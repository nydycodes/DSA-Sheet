#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,x;
	vector<int> v;
	
	cout<<"enter the number of elements: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	
	vector<int> rev(n);
	for(int i=0;i<n;i++){
		rev[i] = v[n-i-1];
	}
	
	for(int i=0;i<n;i++){
		cout<<rev[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
