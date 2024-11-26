#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int result = 0;
	int flag = 1;
	int min;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin>>arr[i];
		}
		for(int j = 1 ; j <= n ; j++)
		{
			for(int z = j + 1 ; z <= n ; z++)
			{
				result = (arr[j-1] + arr[z-1]) + (z-j);
				if(flag == 0 && min > result)
				{
					min = result;
				}
				if(flag)
				{
					min = result;
					flag = 0;
				}
				result = 0;
			}
		}
		flag = 1;
		cout<<min<<endl;
	}

}
