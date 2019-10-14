#include<stdio.h>

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 


int findGCD(int a[], int n) 
{ 
    int result = a[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(a[i], result); 
  
    return result; 
} 

void main(){
  int a[10],n,i;
  printf("Enter the no of nos:");
  scanf("%d",&n);
  printf("Enter the nos:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\nThe GCD is %d\n",findGCD(a,n));
}