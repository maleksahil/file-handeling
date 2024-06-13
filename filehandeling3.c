#include<stdio.h>
#include<string.h>

int main(){

    FILE *fp;
    char s[1000];

    fp = fopen("example3.txt", "a");

    if(fp == NULL){

        printf("error");

    }else{
        printf("Enter your value: ");
        gets(s);

        fputs(" ",fp);
        fputs(s,fp);
        fclose(fp);
        printf("data added");
    }
}