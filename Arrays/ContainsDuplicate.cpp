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
	
	bool flag = false;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(v[i]==v[j]){
				flag = true;
				break;
			}
		}
		if(flag==true){
			break;
		}
	}
	
	(flag)?cout<<"true":cout<<"false";
	cout<<endl;
	
	return 0;
}
