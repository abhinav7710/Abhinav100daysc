//Q67: Insert an element in an array at a given position.
#include<stdio.h>
int main(){
int n,i,pos,x,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&pos);
scanf("%d",&x);
for(i=n;i>pos;i--)
a[i]=a[i-1];
a[pos]=x;
n++;
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}