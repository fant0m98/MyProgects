#include<iostream>
#include<Windows.h>
using namespace std;

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout<<"������ ������� �������� ������ ";
	int n;
	cin>>n;
	cout<<"������ �������� ����� ����� ";
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<"����� ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n³���������� ����� � ������� ��������� - 1\n³���������� ����� � ������� �������� - 2\n��� ���� ";
	int t;
	cin>>t;
	if(t==1){
	for(int j = 0; j < n - 1; j++){
  		for(int i = 0; i < n - 1; i++){
  		if (arr[i] > arr[i + 1]) { 
		int tmp = arr[i];         
		arr[i] = arr[i + 1];  
		arr[i + 1] = tmp;     
       	} 
  		}
	}}
	if(t==2){
	for(int j = 0; j < n - 1; j++){
  		for(int i = 0; i < n - 1; i++){
  		if (arr[i] < arr[i + 1]) { 
		int tmp = arr[i];         
		arr[i] = arr[i + 1];  
		arr[i + 1] = tmp;     
       	} 
  		}
	}}
	cout<<"\n³����������� ����� ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}
