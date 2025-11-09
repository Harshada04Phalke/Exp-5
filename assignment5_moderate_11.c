/* Assignment 5 - Moderate Variation 11
 * Dynamic number of integer readings with validation
 * File: assignment5_moderate_11.c
 */
#include <stdio.h>
#include <stdlib.h>

float calculateAverage(int arr[], int n) {
    long sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n;
    printf("Assignment5 Moderate #11 - Enter number of readings (1-100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) { printf("Invalid number\n"); return 1; }
    int *readings = malloc(sizeof(int) * n);
    if (!readings) { printf("Memory error\n"); return 1; }
    printf("Enter %d integer readings:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &readings[i]);
    printf("Average Sensor Reading = %.2f\n", calculateAverage(readings, n));
    free(readings);
    return 0;
}
