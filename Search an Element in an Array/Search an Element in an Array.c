#include<stdio.h>
int main()
{
	int t,n,x,i,arr[100];
	
	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    scanf("%d",&x);
	    printf("%d\n",search(arr,n,x));
	}
	return 0;
}
int search(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
