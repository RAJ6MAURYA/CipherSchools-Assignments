/*give a list of number of size n and a target value,
we need to find 3 numbers who's sum is closest to the target value*/

#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int size,list[size],target;
	cout<<"Enter the size of the list";
	cin>>size;
	cout<<"Enter the list";
	for( int i=0;i<size;i++)
		cin>>list[i];
	cout<<"Enter the target value";
	cin>>target;

	for(int i=0;i<size;i++)
		for(int j=i+1;j<size;j++)
			for(int k=j+1;k<size;k++){
				int sum=list[i]+list[j]+list[k];
				if(sum==target){
					cout<<"The sum of the three number is "<<sum;
					cout<<"\nThe numbers are: "<<list[i]<<" "<<list[j]<<" "<<list[k];
					getch();
				}
			}
	return 0;
}