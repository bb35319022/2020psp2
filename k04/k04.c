#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ID_NUM 14

struct heights_data{
    int ID, gender;
    double height;
};

int main(void)
{
    struct heights_data data[ID_NUM-1];
    int ID, i=0;
    char fname1[FILENAME_MAX];
    char fname2[FILENAME_MAX];
    char buf[256];
    FILE *fp1, *fp2;
    
    printf("input the filename of sample height:");
    fgets(fname1,sizeof(fname1),stdin);

    fname1[strlen(fname1)-1] = '\0';

     fp1 = fopen(fname1,"r");

    if(fp1==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("the filename of sample ID:");
    fgets(fname2,sizeof(fname2),stdin);

    fname2[strlen(fname2)-1] = '\0';

    fp2 = fopen(fname2,"r");
    
    if(fp2==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }


    printf("Which ID's data do you want?");
    scanf("%d", &ID);
    printf("---\n");    
   

    while(fgets(buf,sizeof(buf),fp1) != NULL){

        fscanf(fp1, "%d, %lf", &data[i].gender, &data[i].height);
        fscanf(fp2, "%d", &data[i].ID);

            if(data[i].ID == ID){

             printf("ID : %d\n", ID);
             if(data[i].gender == 1){
                printf("gender : Male\n");
            }else{
                 printf("gender : Female\n");
            }

            printf("height : %.1lf\n", data[i].height);

            return 0;

            }

            else if(i == ID_NUM-1){
            printf("No data\n");

            return 0;
        }
        
        i++;

    }
}