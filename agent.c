#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char str[100];
    printf("ENTER NAME - ");
    scanf("%[^\n]s" ,str);
    int number;
    srand(time(NULL));
    number = rand()%18;
    if(number==0)
    printf("LUCKY DRAW PICK ANY AGENT YOU WANT");
    if(number==1)
    printf("BRIMSTONE");
    if(number==2)
    printf("PHOENIX");
    if(number==3)
    printf("SAGE");
    if(number==4)
    printf("SOVA");
    if(number==5)
    printf("VIPER");
    if(number==6)
    printf("CYPHER");
    if(number==7)
    printf("REYNA");
    if(number==8)
    printf("KILLJOY");
    if(number==9)
    printf("BREACH");
    if(number==10)
    printf("OMEN");
    if(number==11)
    printf("JETT");
    if(number==12)
    printf("RAZE");
    if(number==13)
    printf("SKYE");
    if(number==14)
    printf("YORU");
    if(number==15)
    printf("ASTRA");
    if(number==16)
    printf("KAY/O");
    if(number==17)
    printf("CHAMBER");
    if(number==18)
    printf("NEON");
    printf(" for %s" ,str);  
}