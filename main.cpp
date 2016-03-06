#include <stdlib.h>
#include <stdio.h>

void fibonacci(int counter);
void arithmetic(int counter);

main(int argc, char *argv[])
{
	if(argv[2][0]=='f')
		fibonacci(atoi(argv[1]));
	
	else if(argv[2][0]=='a')
		arithmetic(atoi(argv[1]));

	else
		printf("Wrong string was given.\n");
}

void fibonacci(int counter)
{
	int *tab = new int[counter];

	tab[0]=1;
	tab[1]=1;

	printf("%d %d ", tab[0], tab[1]);

	for(int i=2;i<counter;i++)
	{
		tab[i]=tab[i-1]+tab[i-2];
		printf("%d ", tab[i]);
	}

	printf("\n");

	delete[] tab;
} 

void arithmetic(int counter)
{
	int constant;
	int *tab = new int[counter];

	printf("Arithmetic progression selected. Enter a constant: ");
	scanf("%d", &constant);

	printf("Enter the first number of series: ");
	scanf("%d", &tab[0]);

	printf("%d ", tab[0]);

	for(int i=1;i<counter;i++)
	{
		tab[i]=tab[i-1]+constant;
		printf("%d ", tab[i]);
	}

	printf("\n");

	delete[] tab;
}
