#include<stdio.h>
#include<string.h>

int main(){

     FILE  *fp;
    char s[1000];
    char name[100];
    char character;
    int age;

    printf("enter your name: ");
    scanf("%s",&name);

    printf("enter your age: ");
    scanf("%d",&age);

    fp = fopen("example5.txt","r");

    if(fp == NULL){
        printf("Error");
    }else{
        if(age>18){
             while(fgets(s,sizeof(s),fp) != NULL){
                printf("%s",s);
            }
            printf("\n");

            printf("\n press y if you accept our terms and condition and press n if you don't accept our terms and condition.: ");
            scanf(" %c",& character);

            if( character == 'y'){
                printf("\nwelcome to our website...");
            }else if( character == 'n'){
                printf("\nplease accept our terms and condition to continue...");
            }
        }
    }
   

    

    // if(fp == NULL){

    //     printf("error");

    //   }else{ 
    //         while(fgets(s,sizeof(s),fp) != NULL){
    //             printf("%s",s);
    //         }
    //       } 
       }