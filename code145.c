/* Q145: Return a structure containing top student's details from a function. */

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student{
    char name[50];
    int roll;
    int marks;
};

struct Student findTopStudent(struct Student s[], int n){
    int i, topIndex = 0;

    for(i = 1; i < n; i++){
        if(s[i].marks > s[topIndex].marks){
            topIndex = i;
        }
    }
    return s[topIndex];
}

int main(){
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    printf("Enter details (Name Roll Marks):\n");
    for(i = 0; i < n; i++){
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    struct Student topper = findTopStudent(students, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
