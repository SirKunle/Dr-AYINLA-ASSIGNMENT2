#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *fp;
    fp = fopen("adam.in","r");
    if(fp == NULL){
        printf("Error accessing the file");
        exit(0);
    }
    int line;
    fscanf(fp,"%d",&line);
    for(int i = 0; i < line; i++){
        char name[100];
        fscanf(fp,"%s",name);
        int count =0;
        for (int a = 0; a < strlen(name); a++){
            if(name[a] == 'U'){
                count++;
            } else {
                break;
            }
        }
        printf("%d \n", count);
    }
    return 0;
}

