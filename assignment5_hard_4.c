/* Assignment 5 - Hard Variation 4
 * Floating point readings, file input, and min/max detection
 * File: assignment5_hard_4.c
 */
#include <stdio.h>
#include <stdlib.h>

float calculateAverage(float arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return (float)(sum / n);
}

int main() {
    const char *fname = "data_assignment5_4.txt";
    FILE *f = fopen(fname, "r");
    if (!f) { printf("Could not open %s for reading.\n", fname); return 1; }
    float readings[500];
    int count = 0;
    while (count < 500 && fscanf(f, "%f", &readings[count]) == 1) count++;
    fclose(f);
    if (count == 0) { printf("No data in file %s\n", fname); return 1; }
    float avg = calculateAverage(readings, count);
    float mn = readings[0], mx = readings[0];
    for (int i = 1; i < count; i++) { if (readings[i] < mn) mn = readings[i]; if (readings[i] > mx) mx = readings[i]; }
    printf("Read %d values from %s\n", count, fname);
    printf("Average = %.3f, Min = %.3f, Max = %.3f\n", avg, mn, mx);
    return 0;
}
