//Q70: Rotate an array to the right by k positions.
#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    k=k%n;
    for(int r=0;r<k;r++){
        int last=a[n-1];
        for(int i=n-1;i>0;i--)
            a[i]=a[i-1];
        a[0]=last;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}