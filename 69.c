//Q69: Find the second largest element in an array.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int largest=a[0],second=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest){
            second=a[i];
        }
    }
    printf("%d",second);
    return 0;
}