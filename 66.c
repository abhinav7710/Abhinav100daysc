//Q66: Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main(){
int n,x,pos;
scanf("%d",&n);
int a[n+1];
for(int i=0;i<n;i++)scanf("%d",&a[i]);
scanf("%d",&x);
pos=0;
while(pos<n&&a[pos]<x)pos++;
for(int i=n;i>pos;i--)a[i]=a[i-1];
a[pos]=x;
for(int i=0;i<=n;i++)printf("%d ",a[i]);
return 0;
}