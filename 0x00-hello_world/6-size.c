#include<stdio.h>
/**
 *
 * return: always 0 (success)
 */
int main(void)
{
	printf("size ofa char: %d byte(s)\n", sizeof(char));
	printf("size ofa int: %d byte(s)\n", sizeof(int));
	printf("size ofa long int: %d byte(s)\n", sizeof(long int));
	printf("size ofa lang long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
