#include<stdio.h>
#include<conio.h>
#define max 100

int Search(int[],int,int,int);

int main()
{

    int a[max],n,value,i,check;
    clrscr();

    printf("\nEnter How Many Elements You Want To Add  :-  ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Array[%d]  :-  ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter Element You Want To Search :-  ");
    scanf("%d",&value);

    check=Search(a,value,0,(n-1));

    if(check==-1)
    {
        printf("\nElement Not Found");
    }
    else
    {
        printf("Element Found At %d Position",check+1);
    }

    getch();
    return 0;
}

int Search(int a[],int value,int start,int end)
{
    int mid;

    if(start>end)
    {
        return -1;
    }
    else
    {
        mid=(start+end)/2;
        if(a[mid]==value)
        {
            return mid;
        }
        else
        {
            if(a[mid]>value)
            {
                return Search(a,value,start,mid-1);
            }
            else
            {
                return Search(a,value,mid+1,end);
            }
        }
    }
}

/*

Output Of Binary Search Using Recursion :-

Enter How Many Elements You Want To Add  :-  5

Enter Array[1]  :-  8
Enter Array[2]  :-  4
Enter Array[3]  :-  2
Enter Array[4]  :-  6
Enter Array[5]  :-  9

Enter Element You Want To Search :-  6
Element Found At 4 Position

*/
