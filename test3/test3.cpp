/* you're a professional robber planning to rob houses along a street.
Each house has a certain amount of money stashed, the only constraint
stopping you from robbing each of them is that adjacent houses have 
security systems connected and it will automatically contact the police
if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house,
return the maximum amount of money you can rob tonight without altering the
police. 
Input: nums=[1,2,3,1]
output:4*/

#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int size;
	cout<<"enter the number of houses : ";
	cin>>size;
	int list[size];
	int sum=0;
	cout<<"Enter the amount of money in each house :";
	for(int i=0;i<size;i++)
		cin>>list[i];

	cout<<"list of house money\n";

	for(int k=0;k<size;k++)
		cout<<list[k];

	for(int j=0;j<size;j+=2)
		sum+=list[j];

	cout<<"\nThe total amount of money the robber can rob is: "<<sum;
}