#include<stdio.h>
#include<string.h>

int main(){

    FILE  *fp;
    char s[1000];

    fp = fopen("example2.txt", "w");
    
    if(fp == NULL){

        printf("error");

    }else{

        printf("Enter your value: ");
        gets(s);
        fputs(s,fp);
        fclose(fp);
        printf("data added");
    }
    
    
}