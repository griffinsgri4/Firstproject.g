#include<stdio.h>
int main()
{
    int students;
    int counter=0;
    int num;
    printf("Enter the number of times you want to repeat the program:");
    scanf("%d", &num);
    while (counter<num)
    {
          printf("Enter the number of student from 1 to 5:");
         scanf("%d", &students);

        switch(students)
   {
        case 1: printf("Name:Griffins Osembo\n,Reg: BSIT/566J/2021\n, Semester:3\n, course:Information Technology\n, Marks:A-72\n, Remarks:Distinction\n");
        break;
        case 2: printf("Name:Frankline kerah\n, Reg:BSCS/077J/2021, Semester:1\n, course:Computer Science\n, Marks:C-51\n, Remarks:Credit\n");
        break;
        case 3: printf("Name:James Omollo Othiambo\n, Reg:BSCE/409J/2021\n, Semester:year 3 Sem 1\n, Course:Chemical Engineering\n, Marks:B-63\n, Remarks:Credit\n");
        break;
        case 4: printf("Name:Evalyn wamboi Kea\n, Reg:DISE/530J/2021\n, Semester:2\n, Course:Software Engineering\n, Marks:A-88\n, Remarks:Distinction\n");
        break;
        case 5: printf("Name:Marion Adisi Osembo\n, Reg:BIIS/440J/2021\n, Semester:1\n, Course:Survey\n, Marks:D-43\n, Remarks:Pass\n");
        break;
        default: printf("wrong input");
    }
        printf("\n");
        counter++;
     }
    return 0;
}

