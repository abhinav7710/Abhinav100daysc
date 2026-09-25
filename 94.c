//#include<stdio.h>
#include<string.h>
int main(){
char s[200],w[50],m[50]="";
int i=0,j=0;
fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]=0;
while(1){
if(s[i]==' '||s[i]=='\0'){
w[j]='\0';
if(strlen(w)>strlen(m))strcpy(m,w);
j=0;
if(s[i]=='\0')break;
}else{
w[j++]=s[i];
}
i++;
}
printf("%s",m);
return 0;
}