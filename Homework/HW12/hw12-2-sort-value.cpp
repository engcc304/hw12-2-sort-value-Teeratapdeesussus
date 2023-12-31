/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/
#include <stdio.h>

struct Student {
    char Name[20];
    float Score;
};

void printStudentInfo(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("%s ", students[i].Name);
    }
    printf("\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%.2f ", students[i].Score);
    }
    printf("\n");
}

int main() {
    Student students1[] = {{"Yorn", 21.42}, {"Omen", 56.00}, {"Alice", 80.75}, {"Violet", 67.76}};
    Student students2[] = {{"Payna", 77.77}, {"Zanis", 88.88}, {"Lubu", 66.66}, {"Krixi", 99.99}};

    printf("Test case 1:\n");
    printStudentInfo(students1, 4);

    printf("\nTest case 2:\n");
    printStudentInfo(students2, 4);

    return 0;
}