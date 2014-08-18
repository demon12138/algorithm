#include<iostream>
using namespace std;
int d[10005],a[10005],b[10005],m;
int check(int r)
{
	if(d[r]==2&&a[r]==b[r])
		return 1;
	if(a[r]>m||b[r]>m)
		return 1;
	int i;
	for(i=0;i<r;i++)
}
int main()
{
	int i,j,k,r,n,count;
	cin>>r;
	for(i=0;i<r;i++)
	{
		count=0;
		cin>>m>>n;
		for(j=1;j<=m;j++)
			a[j]=b[j]=d[j]=0;
		for(j=0;j<n;j++)
		{
			cin>>d[j]>>a[j]>>b[j];
			for(k=0;k<j;k++)
			{
				if()
			}
			if(check(j))
				count++;
		}
	}
}
