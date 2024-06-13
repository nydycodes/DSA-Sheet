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
	
	int min = v[0];
	for(int i=1;i<n;i++){
		if(v[i]<min){
			min = v[i];
		}
	}
	
	int max = v[0];
	for(int i=1;i<n;i++){
		if(max<v[i]){
			max = v[i];
		}
	}
	
	cout<<"minimum element: "<<min<<endl;
	cout<<"maximum element: "<<max<<endl;
	
	return 0;
}
