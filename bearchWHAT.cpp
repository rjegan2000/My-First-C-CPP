#include<bits/stdc++.h>
using namespace std;
int counT=0;
// Invariant: A[l] <= key and A[r] > key 
// Boundary: |r - l| = 1 
// Input: A[l .... r-1] 
int BinarySearch(int A[], int l, int r, int key) 
{ 
	int m; 

	while( l != r ) 
	{   
		m = l + (r-l)/2; 

		if( A[m] < key ){
		counT++;
			l = m+1;} 
		else
{counT++;
						r = m;}
	} 
counT++;
	if( A[l] == key ) 
		return l; 
	else
		return -1; 
} 

// Returns location of key, or -1 if not found 
int BinarySearchSimple(int A[], int l, int r, int key) 
{ 
	int m; 

	while( l <= r ) 
	{   counT++;
		m = l + (r-l)/2; 

		if( A[m] == key ) // first comparison 
		{ counT++;
			return m;} 

		if( A[m] < key ) // second comparison 
			{counT++;
			l = m + 1;} 
		else{
		counT++;
			r = m - 1; }
	} 

	return -1; 
} 


int main(){
	int a[]={0,1,2,3,4,5,6,7};
	int pos;
	pos=BinarySearch(a,0,7,7);
	cout<<"ans: "<<pos<<" "<<counT;
	counT=0;
	pos=BinarySearchSimple(a,0,7,7);
	cout<<"ans: "<<pos<<" "<<counT;
	return 0;
}
