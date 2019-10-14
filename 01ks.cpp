#include<iostream>

using namespace std;

int maximum(int a,int b){
	return (a>b)? a:b;
}

int knap(int P[],int W[],int max,int n){

/*	if(n==0 || max==0)
	 return 0;
	if(W[n-1]>max)
	 return knap(P,W,max,n-1); 
	return maximum(knap(P,W,max,n-1),knap(P,W,max-W[n-1],n-1)+P[n-1]);
*/

int A[n+1][max+1];

for(int i=0;i<=n;i++)
 for(int j=0;j<=max;j++)
 {
   if(i==0 || j==0)
    A[i][j]=0;
   
   else if(W[i-1]>j)
      A[i][j]=A[i-1][j];
	   else
	  A[i][j]=maximum(A[i-1][j] , A[i-1][j-W[i-1]] + P[i-1] );   
 }
 
 return A[n][max];
}

int main(){
	int P[]={2,3,4,5,6,7,9};
	int W[]={1,2,4,5,6,7,8};
	int maxW=13;
	//cout<<max(2,3);
	cout<<knap(P,W,maxW,sizeof(P)/sizeof(int));
	return 0;
}
