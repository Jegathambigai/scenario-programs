#include<stdio.h>
int main(){
    int n,i,a,b,l=0,j,c,d=0,e[100],f=0;
    char s[100];
    printf("Enter the available curtains(a-aqua & b-black):");
    scanf("%s",&*s);
    printf("Enter the length of curtains substring:");
    scanf("%d",&n);
    for(i=0;s[i]!='\0';i++){
        l=l+1;
    }
    a=l/n;
    b=l%n;
    if(b!=0){
        a=a+1;
    }
    for(i=0;i<a;i++){
        for(j=0;j<n;j++){
            c=j+(i*n);
            if(s[c]=='a'){
                d=d+1;
            }
            else if(s[c]=='\0'){
                break;
            }
        }e[i]=d;
        d=0;
    }
for(i=0;i<a;i++){
    if(f<e[i]){
        f=e[i];
    }
}
printf("Maximum no. of a's in the %d length substrings: %d",n,f);
}