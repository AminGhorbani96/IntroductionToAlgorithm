#include <stdio.h>
int main()
{
    int A[6] = { 5, 2, 4, 6, 1, 3 };
    int key = 0;
    int i = 0;
    for (int j = 1; j < (sizeof(A) / sizeof(int)); j++)
    {
        key = A[j];
        i = j - 1; 

        while (i >= 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }

        A[i + 1] = key;

        //printf("%d\n", A[i]);
    }
    
    // Validate Result
    for (int z = 0; z < (sizeof(A) / sizeof(int)); z++){
        printf("%d\n", A[z]);
    }
    

    return 0;
}