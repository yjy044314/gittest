#include<iostream>
#include<Windows.h>

using namespace std;

int main(void) {
	//������
	int i=0;
	int j=0;
	int k=0;
	int n=0;
	cout<<"������������Ĳ�����"<<endl;
	cin>>n;
	for(i=1;i<=n;i++) {
	
		for(j=1;j<=n-i;j++) {
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++) {
			cout<<"*";
		}
		cout<<endl;
	
	}
	system("pause");
	return 0;

}