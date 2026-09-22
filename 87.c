//Q87: Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main(){
char s[1000];
int sp=0,dg=0,spl=0,i=0;
fgets(s,sizeof(s),stdin);
while(s[i]!='\0'&&s[i]!='\n'){
if(s[i]==' ')sp++;
else if(s[i]>='0'&&s[i]<='9')dg++;
else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))spl++;
i++;
}
printf("Spaces: %d\nDigits: %d\nSpecial Characters: %d\n",sp,dg,spl);
return 0;
}