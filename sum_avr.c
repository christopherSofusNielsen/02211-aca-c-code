#include <stdio.h>

int main(int argc, char const *argv[])
{
    int data[]={32,432,4324,43,22};
    int sum=0;

    for(int i=0; i<5;i++){
        sum+=data[i];
    }

    int avr = sum/5;

    printf("sum: %i, average: %i", sum, avr);

    return 0;
}
