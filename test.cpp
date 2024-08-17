//#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
#define N 10
int maxmin(int *arr,int *pt1,int *pt2,int n);
int main()
{
	int array[N]={10,7,19,29,4,0,7,35,-16,21},*p1,*p2,a,b;
	p1=&a;p2=&b;
	maxmin(array,p1,p2,N);
	vector<int> test(15, 1);
	printf("max=%d,min=%d\n",a,b);
	int len = test.size();
	for(int i = 1; i < len; ++i){
	    test[i] += test[i - 1];
	    cout << test[i] << endl;
	}
	return 0;
}

int maxmin(int *arr,int *pt1,int *pt2,int n)
{
	int i;
	*pt1=arr[0];*pt2=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>*pt1)*pt1=arr[i];
		if(arr[i]<*pt2)*pt2=arr[i];	
	}
	return 0;
}
