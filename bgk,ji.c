#include <stdio.h>
#include <stdlib.h>
struct stu
{
    char name[20];
    int roll;
    float total;
    float percent;
};
int main()
{
    struct stu n;
    int s;
    int i;
    printf("enter number of subject :");
    scanf("%d", &s);

    printf("\tgetting the details of the students.... \n");

    printf("enter name of the student : ");
    scanf("%s", &n.name);
    printf("enter the roll_number : ");
    scanf("%d", &n.roll);

    float marks[s];
    printf("enter Marks of the students..\n ");
    for (i = 0; i < s; i++)
    {
        scanf("%f", &marks[i]);
    }
    n.total = 0;
    for (int i = 0; i < s; i++)
    {
        n.total = n.total + marks[i];
        n.percent = (n.total / (s * 100)) * 100;
    }
    printf("Displaying result of the student...\n");
    printf("student name -%s\n", n.name);
    printf("student rol_number - %d\n", n.roll);
    printf("student total marks ->%f\n", n.total);
    printf("student total percentage ->%f\n", n.percent);
}