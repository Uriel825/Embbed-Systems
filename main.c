#include <stdio.h>
#include "stats.h"
//Size of data


 int main() {
    // start of code                (5x3)
    int size;
    size = 40;
    int data_array[5][8] = {{34, 201, 190, 154,   8, 194,   2,   6},
                            {114, 88,   45,  76, 87,  123,  25,  23},
                            {200, 122, 150, 90,   92,  87, 177, 244},
                            {201,   6,  12,  60,   8,   2,   5,  67},
                            {7,  87, 250, 230,  99,   3, 100,  90}};

     print_stats(data_array, size);
     return 0;
}

//Creacion de la funcion
void print_stats (int value[5][8], int lenght){
    printf("The original size is:\n\n");
    print_alldata (value, lenght);
    sort_data (value, lenght);
    printf("The sort array is:\n\n");
    print_alldata(value,lenght);
    printf("Median is%d\n", print_median (value,lenght));
    printf("Mean is%d\n",print_mean (value,lenght));
    printf("Max%d\n",print_maximum (value,lenght));
    printf("Min%d\n", print_minimun(value, lenght));

}

//Print all array
void print_alldata( int array[5][8],  int lenght){
    //columns
    for (int i = 0; i <= 5 ;i++) {
        //rows
        for (int j = 0;  j <= 8 ; ++j) {
            printf("%d ", array[i][j]);

        }
        printf("\n");
    }
   printf("\n");

}

int print_median(int array [5][8], int lenght){
    return array[(lenght-1)/2];
}

int print_mean (const int  array[5][8], int lenght){
    unsigned int sum = 0;
    for (int i = 0; i < lenght; ++i) {
        sum+= array[i];
    }
    return (sum/lenght);
}

int print_maximum (int array[5][8], int lenght){
    return array[lenght-1];
}

int print_minimun(int array[5][8], int i) {
    return array[0];
}

void sort_data(int array[], int lenght){
 unsigned char tmp;
    for (int i = 0; i < lenght ; ++i) {
        for ( int j = i+1 ; j < lenght ; ++j) {
            if (array[j] < array[i]){
                tmp = array[j];
                array[j] = array[i];
            }
        }
    }
    return;
}