#include <iostream>

using namespace std;

struct Student {

    int facultyNumber;
    int year;
    double averageGrade;

};

struct Group{
    Student* students;
    int size;
};

//function to enter the student(as the instructions say)
void intiStudent(Student &student) {
    do {  cin >> student.facultyNumber >> student.year >> student.averageGrade;
    } while (student.facultyNumber < 10000 || student.facultyNumber > 99999 ||
             student.year < 1 || student.year > 4 || 
             student.averageGrade < 2 || student.averageGrade > 6);
}

//function to check for students with average grade higher than the given one
void checkForSS(const Student students[], double gradeForSS, int N) {
    int count = 0;
    for (size_t i = 0; i < N; i++) {
        if (students[i].averageGrade >= gradeForSS) {
            count++;
        }
    }
    cout << count;
}

//function to calculate the average grade of the students
void averageGrade(Student students[], int N) {
    double sum = 0;
    for (size_t i = 0; i < N; i++) {
        sum += students[i].averageGrade;
    }
    cout << sum / N << " ";
}

int main(){

    Group group;
    int N; double gradeForSS;

    do { cin >> N;
    } while (N < 1 || N > 500);

    //allocating memory for the array of students
    group.students = new Student[N];
    group.size = N;
    
    for (size_t i = 0; i < N; i++) {
        intiStudent(group.students[i]);
    }
    
    cin >> gradeForSS;
    averageGrade(group.students, N);
    checkForSS(group.students, N, gradeForSS);
   
    //freeing the memory
    delete[] group.students;

    return 0;
}
