#include<stdio.h>
#include<string.h>

int main(){

    FILE *fp;
    char s[1000];

    fp = fopen("example4.txt","r");

    if(fp == NULL){

        printf("Error");

    }else{
       while(fgets(s,sizeof(s),fp) != NULL){
        printf("%s",s);
       }
    }


}