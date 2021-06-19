#include<stdio.h>
/**main - Print to a,b,c... with push
 *
 * Return: This is the end
*/
int main(void)
{
	int abc = 97;

	while (abc >= 122)
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
