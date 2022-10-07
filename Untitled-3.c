#include <stdio.h>
int main() {
    int n, i,r, t=0;
    float p;
    char name[10];
    printf("Enter student name: \n");
    scanf("%s",&name);
     printf("Enter student roll no.: ");
    scanf("%d",&r);
    printf("enter total sub ");
    scanf("%d", &n);
    int marks[n];
    printf("enter %d marks\n", n);
    for(i=1;i<n;i++)
    {
        scanf("%d\n", &marks[i]);
        t=t+marks[i];
    }
    printf("%d\n", t);
    printf("%s\n", name);
    printf("%d\n", r);
    p= (t/n );
    printf ("Perc is: %f", p);
}