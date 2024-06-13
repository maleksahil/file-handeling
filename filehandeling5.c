#include<stdio.h>
#include<string.h>
int main(){

    int name[100];
    int age;
    int condition;
    char s[1000];

    printf("Enter your name here: ");
    scanf("%s",&name);

    printf("Enter your age here: ");
    scanf("%d",&age);



    FILE *fp;

    fp = fopen("example5.txt","r");

    if(fp == NULL){
        printf("error");
      }else{

        if(age>=18){
            while(fgets(s,sizeof(s),fp) != NULL){
                printf("%s",s);
            }
        }else{
            printf("you are not eligable to use this website...");
        }
    }
   
}