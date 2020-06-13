#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern double ave_online(double val,double ave)
extern double var_online(double val,double ave,double square_ave)

int main(void)
{
    double val;
    char fname[heights_male.csv];
    char buf[256];
    FILE* fp;

    printf("input the filename of sample:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%lf",&val);
        
        

    



    }

    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("Average: %f\n", ave2);
    printf("Variance: %f\n", var);

    return 0;


}

int N;

double ave_online(double val,double ave)
{
    double ave2;

    ave2 = (N-1) * ave / N + val / N;

    return ave2;
}

double var_online(double val,double ave, double square_ave)
{
    double var;

    var = ((N-1)*square_ave/N+val*val/N) - ((N-1)*ave/N+val/N)*((N-1)*ave/N+val/N);

    return var;
}