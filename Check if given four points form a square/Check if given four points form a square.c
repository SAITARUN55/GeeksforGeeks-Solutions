#include<stdio.h>
int getDistance(int x1,int y1,int x2,int y2){
    return ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
	int t,a,b,c,d,e,f,g,h;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	    int l1=getDistance(a,b,c,d);
	    int l2=getDistance(c,d,e,f);
	    int l3=getDistance(e,f,g,h);
	    int l4=getDistance(g,h,a,b);
	    if((l1==l3)&&(l2==l4)&&(l1!=0)){
	        printf("1\n");
	    }
	    else
	    {
	        printf("0\n");
	    }
	}
	return 0;
}
