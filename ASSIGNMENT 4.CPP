#include<iostream>
using namespace std;

int main( ){
	int arr[5];
	int* ptr = arr;
	
	//Taking input for array elements
	cout << "Enter 5 elements: ";
	for(int i= 0; i<5; i++){
	cin>>*(ptr+i);	
	} 
//Printing array elements 
cout << "You entered:";
	for(int i= 0; i<5; i++){
	cout<<*(ptr+i)<<" ";
	} 
	return 0;
}

