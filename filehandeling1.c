#include<stdio.h>
#include<string.h>

int main(){

    char hello[1000];

    FILE *fp;

    fp = fopen("example.txt","w");

    printf("Enter your value: ");

    fgets(hello,sizeof(hello),stdin);

    for(int i=0; i<strlen(hello); i++){
        fputc(hello[i],fp);
    }

    fclose(fp);

    return 0;
}