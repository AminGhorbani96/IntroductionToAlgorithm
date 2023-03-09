#include <stdio.h>
// void Merge(int A[], int p, int q , int r)
// {
// 	int n1 = p - q + 1;
// 	int n2 = r - q;

// 	int L[n1];
// 	int R[n2];

// 	for (int i = 0; i < n1; i++)
// 	{
// 		L[i] = A[p+i];
// 	}

// 	for (int j = 0; j < n2; j++)
// 	{
// 		R[j] = A[q+j+1];
// 	}

// 	int i = 0;
// 	int j = 0;
// 	int k = p;

// 	while(i < n1 && j < n2){
// 		if (L[i] <= R[j])
// 		{
// 			A[k] = L[i];
// 			i++;
// 		}
// 		else
// 		{
// 			A[k] = R[j];
// 			j++;
// 		}
// 		k++;
// 	}

// 	while(i < n1){
// 		A[k] = L[i];
// 		i++;
// 		k++;
// 	}

// 	while(j< n2){
// 		A[k] = R[j];
// 		j++;
// 		k++;
// 	}

	
// }

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
 	int n2 = r - q;

 	int L[n1];
 	int R[n2];
  	int i = 0;
  	int j = 0;
  	int k = 0;
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];
  
    
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = p; // Initial index of merged subarray
  	while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
    /* Copy the remaining elements of L[], if there
    are any */
   while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int A[], int p, int r)
{
	if (p<r)
	{
		int q = (p+r-1) / 2;

		MergeSort(A, p, q);
		MergeSort(A, q+1, r);
		merge(A,p,q,r);

	}
	
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main(int argc, char const *argv[])
{
	//MergeSort({1,2,6,8,3,8,0,3,1,0,3,2,9}, 0, 12);
	
  
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    printf("Given array is \n");
    printArray(arr, arr_size);
  
    MergeSort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
	return 0;
}
		
	


		