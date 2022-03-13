


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int data[]={32,432,4324,43,22};
    int sum=0;

    for(int i=0; i<5;i++){
        sum+=data[i];
    }
    printf("Sum: %i", sum);

    return 0;
}
