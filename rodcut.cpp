#include<bits/stdc++.h>

using namespace std;

struct Cut{
	int length,price;
};

bool compare(Cut a,Cut b){
	return float(b.price)/b.length < float(a.price)/a.length ;
}

int Maxcut(Cut a[],int n){

int maxp = 0,left=n,i=0;
sort(a,a+n,compare);

//for(int i=0;i<n;i++){
//	cout<<a[i].length<<" "<<a[i].price<<"\n";
//}

while(left){
	if(a[i].length>left){
		i++;
		continue;
	}
	int times = left/a[i].length;
	left -= times*a[i].length;
	maxp+= a[i].price*times;
}

return maxp;
}

int main(){
	int inp[]={3   ,5   ,8   ,9  ,10  ,17  ,17  ,20};
	int n = sizeof(inp)/sizeof(int);
	Cut a[n];
	for(int i=0;i<n;i++){
		a[i].length=i+1;
		a[i].price=inp[i];
	}
	cout<<Maxcut(a,n);
	return 0;
}
