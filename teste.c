#include<stdio.h>

int main(void)
{
	FILE *arr = fopen("texto.txt","r");
	if (arr == NULL)
		{
			printf("NULL :(\n");
			return 1;
		}
	char ch  = fgetc(arr);
	while (ch != EOF)
	{
		printf("%c", ch);
		ch = fgetc(arr);
	}
        
return 0;
}
	
