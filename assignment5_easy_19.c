/* Assignment 5 - Easy Variation 19
 * Average Sensor Reading (int array, fixed count)
 * File: assignment5_easy_19.c
 */
#include <stdio.h>

float calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n = 4;
    int sensor[4];
    printf("Assignment5 Easy #19 - Enter %d integer sensor readings:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &sensor[i]);
    printf("Average Sensor Reading = %.2f\n", calculateAverage(sensor, n));
    return 0;
}
