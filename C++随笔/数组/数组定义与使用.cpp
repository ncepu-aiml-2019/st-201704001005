#include<iostream>
using namespace std;
int main()
{
	int i,a[5];
	for(i=0;i<5;i++)
		cin>>a[i];
	for(i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(i=4;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<endl;
}