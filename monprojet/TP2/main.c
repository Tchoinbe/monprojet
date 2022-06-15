#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main (int argc, char const *argv[]){

int n=65636;
float *X =(float*)malloc(sizeof(float)*n); //allocation dynamique du tablau A
int i;
double sum;


    #pragma omp parallel  num_threads(5)  // CREATION DE 5 thread pour la paralelisation du programme.
for(i=0;i<n;i++){
    A[i]=(A[i]+A[i-1])/2;


    printf("Hello world!\n");

    return 0;
}
