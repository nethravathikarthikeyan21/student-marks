#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float average;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Calculate average
    average = (m1 + m2 + m3 + m4 + m5) / 5.0;

    // Display result
    printf("Average marks = %.2f", average);

    return 0;
}


output:Enter marks of 5 subjects:
80 75 90 85 70
Average marks = 80.00