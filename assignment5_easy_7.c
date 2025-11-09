/* Assignment 5 - Easy Variation 7
 * Average Sensor Reading (int array, fixed count)
 * File: assignment5_easy_7.c
 */
#include <stdio.h>

float calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n = 8;
    int sensor[8];
    printf("Assignment5 Easy #7 - Enter %d integer sensor readings:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &sensor[i]);
    printf("Average Sensor Reading = %.2f\n", calculateAverage(sensor, n));
    return 0;
}
