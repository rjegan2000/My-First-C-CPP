//1, 2, 8, 10, 10, 12, 19
#include <iostream>
using namespace std;
int binarysearch(int a[],int l,int r,int key){
	int mid;
	
	if(a[l]>key) return l;
	else if(a[r]<key) return -1;
	
	while(l<r){
		mid = (l+r)/2;
		if(a[mid]==key) return mid;
		else if(a[mid]>key) r=mid-1;
		else l=mid+1;
		
	}
	
	return r;
}

int main()
{
    int A[] = {1,2,4,5,6};
    int r = sizeof(A) / sizeof(int) - 1;
	cout<<"ans: "<<binarysearch(A,0,r,3);
	return 0;
}
