// selection sort function module in C
#include <math.h>


void swap(int *a,int *b);

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, mi; 
	for (i = 0; i < length - 1; i++)
  {
    mi = i;
    for (j = i + 1; j < length; j++)
    {
      if (data[j] < data[mi]) mi = j;
    }
    if (mi != i) swap(&data[mi], &data[i]);
  display(data,length);
  }
} 

// // teacher's code

// void selectionSort(int a[], int n) 
// { 
// 	int i;

//   // int m = a[0];
//   int mi = 0;
// 	for (i = 0; i < n - 1; i++)
//   {
//     int m = a[i];
//     mi = i;
//     for (int j = i + 1; i < n; i++)
//     {
//       if (a[mi] > a[i])
//       {
//         m = a[i];
//         mi = i;
//       }
//     }
//     swap(&a[i], &a[mi]);

//   display(a,n);
//   }
	
// } 


void insertion(int a[],int n){
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && a[j-1] > a[j])
    {
      swap(&a[j-1], &a[j]);
      j--;
    }
    display(a, n);
  }

}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

  // how may pair to compare?
  for(int i = 0; i < n-1; i++)
  {
    int sorted;
    for (int j = 0; j < n-i-1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(&a[j], &a[j+1]);
        sorted = 1;
      }
      display(a, n);
    }
    if (sorted == 0) break;
  }
}

int Isprime(int x) 
{
  if (x == 1 || x == 0) return 0;
  for(int i = 2; i < x; i++)
  {
    if (x % i == 0) return 0;
  }
  return 1;
}


