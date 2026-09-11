//Q65: Search in a sorted array using binary search.
#include<stdio.h>
int main(){
int n,x,l=0,r,mid,found=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)scanf("%d",&a[i]);
scanf("%d",&x);
r=n-1;
while(l<=r){
mid=(l+r)/2;
if(a[mid]==x){
found=1;
break;
}
else if(a[mid]<x)l=mid+1;
else r=mid-1;
}
if(found)printf("Element found at index %d",mid);
else printf("Element not found");
return 0;
}