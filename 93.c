//Q93: Check if two strings are anagrams of each other.
#include<stdio.h>
#include<string.h>
int main(){
char a[100],b[100];
int c[256]={0},i,f=1;
scanf("%s %s",a,b);
if(strlen(a)!=strlen(b)){printf("False");return 0;}
for(i=0;a[i];i++){c[(int)a[i]]++;c[(int)b[i]]--;}
for(i=0;i<256;i++){if(c[i]!=0){f=0;break;}}
if(f)printf("True");
else printf("False");
return 0;
}