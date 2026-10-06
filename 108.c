//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
if(scanf("%d",&n)!=1)return 0;
int*nums=(int*)malloc(n*sizeof(int));
int*ans=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
scanf("%d",&nums[i]);
ans[i]=1;
}
int lp=1;
for(int i=0;i<n;i++){
ans[i]*=lp;
lp*=nums[i];
}
int rp=1;
for(int i=n-1;i>=0;i--){
ans[i]*=rp;
rp*=nums[i];
}
for(int i=0;i<n;i++){
printf("%d ",ans[i]);
}
free(nums);
free(ans);
return 0;
}
