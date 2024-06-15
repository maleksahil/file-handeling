#include<stdio.h>
#include<string.h>


int main(){
    
char name[100]; // user name
char fruits[4][10]={"apple","mango","pinaple","banana"};  

int price[50]; 
int total=0; 

char s[1000]; 

printf("Enter your name: "); 
scanf("%[^\n]s",&name); 


printf("Your name is : %s\n",name);


for (int i = 0; i<4; i++)
{

    printf("Enter the price of %s : ",fruits[i]); 

    scanf("%d",&price[i]); // assign marks into mark variable

    total += price[i]; // add marks to total

}

//printf("%d",total);

itoa(total, s, 10);

printf("%s\n", s);

FILE *fp;

fp = fopen("luli.txt","w");

fputs(s,fp);
fclose(fp);

}