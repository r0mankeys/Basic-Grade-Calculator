// Compute a students grade based on an average of their scores

#include <stdio.h>

double getAverage(double scores[]) {

    double average = 0;

    for (int score = 0; score < 5; score++) {
        average += scores[score];
    }

    average /= 5;

    return average;
}
char computeGrade(int averageScore) {
    char grade;

    if (averageScore > 100 || averageScore < 0) {
        grade = 'I';
    } else if (averageScore >= 80) {
        grade = 'A';
    } else if (averageScore >= 70) {
        grade = 'B';
    } else if (averageScore >= 60) {
        grade = 'C';
    } else if (averageScore >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    return grade;
}

int main() {

    double scores[] = {90, 100, 50, 46, 72};

    double average = getAverage(scores);

    char grade = computeGrade(average);

    printf("Your grade is: %c\n", grade); // Example should print "Your grade is: B\n

    return 0;  
}
