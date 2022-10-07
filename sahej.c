#include <stdio.h>
int search(int a[],int n,int ele)
{
    int beg=0,end,mid;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==ele)
        {
            return mid;
        }
        if(a[mid]<ele)
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
}
int main()
{
    int n,i,ele;
    printf("Enter number of Elements must be present in array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter Elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter Elements you want to search: ");
    scanf("%d", &ele);
    int search1=search(a,n,ele);
    printf("%d element is at the position %d",ele,search1+1);
}