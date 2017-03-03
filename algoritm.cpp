#include<iostream>
#include<Windows.h>
using namespace std;

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout<<"Введіть кількість елементів масиву ";
	int n;
	cin>>n;
	cout<<"Введіть елементи через пробіл ";
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<"Масив ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nВідсортувати числа в порядку зростання - 1\nВідсортувати масив в порядку спадання - 2\nВаш вибір ";
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
	cout<<"\nВідсортований масив ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}
