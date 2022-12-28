#include <stdio.h>

struct Student {
    int rollNo;
    char *name;
    char *dept;
    char *course;
    int yoj;
};

void printStudent(struct Student);
void printStudents(struct Student[], int, int);

int main() {
    struct Student studs[450];
    struct Student s;
    s.rollNo = 207907;
    s.name = "Amrit";
    s.dept = "CSE";
    s.course = "MCA";
    s.yoj = 2020;
    printStudent(s);
    return 0;
}

void printStudent(struct Student s) {
    printf("%d %s %s %s %d\n", s.rollNo, s.dept, s.name, s.course, s.yoj);
}

void printStudents(struct Student studs[], int n, int yoj) {
    for (int i = 0; i < n; ++i) {
        if (studs[i].yoj == yoj) {
            printStudent(studs[i]);
        }
    }
}
