#include <stdio.h>
int main()
{
    int n,i,ele;
    printf("Enter number of Elements must be present in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter Elements you want to search: ");
    scanf("%d", &ele);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("\n%d is in the array at position %d",ele,i+1);
            return i;
        }
    } 
         printf("\n%d it is not in the array",ele);
    return 0;
}
