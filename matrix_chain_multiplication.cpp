#include <bits/stdc++.h>
using namespace std;
int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int mini = INT_MAX;
	int count;
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		mini = min(count, mini);
	}
	return mini;
}
int main()
{
    int N;
    cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
	    cin>>arr[i];
	 }

	cout << "Minimum number of multiplications is "
		<< MatrixChainOrder(arr, 1, N - 1);
	return 0;
}
//////////////////////////////////
/*
#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
int matrix(int a[],int i,int j){
    int k;
    if(i==j){
        return 0;
        
    }
    int mini=INT_MIN;
    int count;
    for(k=i;k<=j;k++){
        count=matrix(a,i,k)+matrix(a,k+1,j)+a[i-1]*a[k]*a[j];
        mini=(mini,count);
        return mini;
    }
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<matrix(a,1,n-1);
}*/
