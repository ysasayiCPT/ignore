#include<stdio.h>
int ft_return_largest(int* n);
int main()
{
	int numbers[] = {12,3,99,2,32,33,52};
	printf("the largest of all: %d", ft_return_largest(numbers));
	return 0;
}
int ft_return_largest(int* n)
{
	int i =0;
	int keeper = n[0];
	while(i<7)
	{
		if(n[i] > keeper)
		{
			keeper = n[i];
		}
		i++;
	}
	return keeper;
}
