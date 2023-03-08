#include <stdio.h>

int main(int argc, char const *argv[])
{
	int	A[6] = {5, 2, 4, 6, 1, 3} ;
	

	for(int index = 0; index < (sizeof(A) / sizeof(int)); index++)
	{
		int min_index = index;
		for (int i = index + 1; i < (sizeof(A) / sizeof(int)); i++)
		{
			
			if(A[i] < A[min_index]){
				min_index = i;
			}
		}
		
		
		int temp = A[index];
		A[index] = A[min_index];
		A[min_index] = temp;
	}
	
	for (int z = 0; z < (sizeof(A) / sizeof(int)); z++){
    	printf("%d, ", A[z]);
	}	
	printf("\n");
	return 0;
}