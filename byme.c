#include<stdio.h>

int main(){
    int i=1;
    int j=1;


    // // While -1
    // while(1){
    //     printf("hello\n");
    // }

    // Do-While - 1

    // do{
    //     printf("hello\n");
    // }while(1);


    // // For loop - 1
    // for(;;){
    //     printf("hello\n");
    // }

    // Break -stop 
    // for(i=1;i<=10;i++){
    //      printf("%d\n",i);
    //     if(i==5){
    //         break;
    //     }
       
    // }

    // Continue - skip
    // for(i=1;i<=10;i++){
    //     if(i==5){
    //         continue;
    //     }
    //      printf("%d\n",i);
       
    // }

    // goto statement - jump 


    for(i=1;i<=4;i++){
            for(j=1;j<=4;j++){
                if(i==2 && j==2){
                    goto end;
                }
                printf("%d %d\n",i,j);
        
    }
    }
    end:
    printf("last line");
}