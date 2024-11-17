

#include <iostream>

int main()
{
    int nums[10];
	
	for (int i = 0; i < 10; i++)
	{

		
		scanf_s("%d", &nums[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
	for (int i = 10 - 1; i >= 0; i--)
	{
		printf("%d ", nums[i]);
	}
	


	
}


