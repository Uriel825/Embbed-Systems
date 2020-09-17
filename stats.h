//
// Created by uriel on 13/09/20.
//

#ifndef EMBBED_SOFTWARE_1ST_PROJECT_STATS_H
#define EMBBED_SOFTWARE_1ST_PROJECT_STATS_H

//Esta zona es la de declaracion de funciones

//Mi
void print_stats(int array[5][8], int lenght);

//Print dataset
void print_alldata(int array[5][8], int lenght);

// Median of data
int print_median (int array[5][8],int lenght);

// Minimun of data
int print_minimun(int array[5][8], int i);

//Maximum of data
int print_maximum (int array[5][8], int lenght);

//Mean of data
int print_mean (const int array[5][8], int lenght);

//Sort Data
void sort_data (int array[], int lenght);
#endif //EMBBED_SOFTWARE_1ST_PROJECT_STATS_H
