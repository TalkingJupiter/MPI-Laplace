#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <sys/time.h>

//Plate size
#define COLUMNS 1000
#define ROWS 1000

double temperature[ROWS+2][COLUMNS+2];
double temperature_last[ROWS+2][COLUMNS+2];

void initialize();
void track_process(int iter);

int main(int argt, char *argv[]){

}
