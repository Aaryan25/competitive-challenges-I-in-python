#include<stdio.h>
#include<conio.h>

int arr[20];

int main()
{
  int n,i;
  clrscr();

  printf("\nEnter the size of array  :-  ");
  scanf("%d",&n);

  for(i=0; i<n; i++)
  {
      printf("Enter Array[%d] :-  ",i+1);
      scanf("%d",&arr[i]);
  }

  merge_sort(arr,0,n-1);

  printf("Sorted array  :- ");
  for(i=0; i<n; i++)
  {
    printf("\t%d",arr[i]);
  }

  getch();
  return 0;
}

int merge_sort(int arr[],int start,int end)
{
  int mid;
  if(start<end)
  {
    mid=(start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
  }
  return 0;
}

int merge(int arr[],int start,int mid,int end)
{
  int arr1[10],arr2[10];
  int n1,n2,i,j,k;
  n1=mid-start+1;
  n2=end-mid;

  for(i=0; i<n1; i++)
  {
    arr1[i]=arr[start+i];
  }
  for(j=0; j<n2; j++)
  {
    arr2[j]=arr[mid+j+1];
  }
  arr1[i]=9999;  // To mark the end of each temporary array
  arr2[j]=9999;
  i=0;
  j=0;
  for(k=start; k<=end; k++)
  {
    if(arr1[i]<=arr2[j])
    {
      arr[k]=arr1[i++];
    }
    else
    {
      arr[k]=arr2[j++];
    }
  }
  return 0;
}

/*
Output Of Merge Sort  :-

Enter the size of array  :-  7
Enter Array[1] :-  9
Enter Array[2] :-  3
Enter Array[3] :-  6
Enter Array[4] :-  1
Enter Array[5] :-  8
Enter Array[6] :-  2
Enter Array[7] :-  4
Sorted array  :-        1       2       3       4       6       8       9

*/
