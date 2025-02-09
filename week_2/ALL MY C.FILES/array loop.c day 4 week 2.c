#include <stdio.h>

int main() {
    // Array containing grades of 10 students
    int Grades[] = {45, 60, 49, 10, 56, 78, 90, 100, 21, 56};
    
    // Index variable
    int i = 0;
    
    // While loop to display all grades
    while(i < 10) {
        printf("Grade of student %d: %d\n", i+1, Grades[i]);
        i++;
    }
    
    return 0;
}