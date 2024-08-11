#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int n,c,a=0,d=0;
    printf("Enter the starting day of the month:");
    scanf("%s",&*s);
    printf("Enter the number of days:");
    scanf("%d",&n);
    if(strcmp(s,"sun")==0){
        c=0;
    }
    else if(strcmp(s,"mon")==0){
        c=6;
    }
    else if(strcmp(s,"tue")==0){
        c=5;
    }
    else if(strcmp(s,"wed")==0){
        c=4;
    }
    else if(strcmp(s,"thu")==0){
        c=3;
    }
    else if(strcmp(s,"fri")==0){
        c=2;
    }
    else if(strcmp(s,"sat")==0){
        c=1;
    }
    
    while(a!=n&&a<n){
        
        if(a==0){
            
            a=a+c;
            d=d+1;
            
        }
        else if(a>0){
            a=a+7;
            d=d+1;
           
        }
        
        
    }
    printf("Total number of sundays in the month starting with the day \"%s\" is %d within the first %d days",s,d,n);
}