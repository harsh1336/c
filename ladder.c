#include<stdio.h>
int main()
{
    int marks;
    printf("enter your rejuclt");
    scanf("%d\n",&marks);
    if(marks>=80){
        printf("your are scollar");
    }else if (marks>=70){
        printf("B+");
    }else if(marks>=50){
        printf("average");
    }else if(marks<=35){
    printf("fail");
}    

}