#include <stdio.h>
int main(int argc, char *argv[]){
    int j, k, *apt;
    k=2;
    j=5;
    k=j;
    apt=&k;
    *apt=7;
    printf("%i %i \n %i %i \n", j, k, apt, *apt);
    return 0;
}