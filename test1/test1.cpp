/*given an array nums containing n distinct numbers in the range[0,n]
return the only number in the range that is missing from the array
input: nums=[3,0,1]*/

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int size,list[size],total=0;
	cout<<"Enter the size of the number list";
	cin>>size;
	cout<<"Enter the numbers";
	
	for(int j=1;j<size+1;j++)	//sum of numbers from 1 to n
		total+=j; 				

	for(int i=0; i<size;i++){	//input the numbers
		cin>>list[i];
		total-=list[i];
	}

	cout<<"the missing value is"<<total;

}