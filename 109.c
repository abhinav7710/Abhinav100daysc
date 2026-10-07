//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include<stdio.h>
int main(){
int n;
if(scanf("%d",&n)!=1||n<=0){
printf("-1\n");
return 0;
}
int nums[n];
for(int i=0;i<n;i++){
scanf("%d",&nums[i]);
}
int cand=nums[0],count=1;
for(int i=1;i<n;i++){
if(count==0){
cand=nums[i];
count=1;
}else if(nums[i]==cand){
count++;
}else{
count--;
}
}
int actualCount=0;
for(int i=0;i<n;i++){
if(nums[i]==cand){
actualCount++;
}
}
if(actualCount>n/2){
printf("%d\n",cand);
}else{
printf("-1\n");
}
return 0;
}
