#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    // Iterate over both strings from right to left and add digits
    while (i >= 0 || j >= 0 || carry != 0) {
        int sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }
        if (k >= size_r) {
            // Result can't be stored in r, return 0
            return 0;
        }
        carry = sum / 10;
        r[k] = (sum % 10) + '0';
        k++;
    }

    // Reverse the result string
    for (int i = 0; i < k / 2; i++) {
        char tmp = r[i];
        r[i] = r[k - i - 1];
        r[k - i - 1] = tmp;
    }

    // Add null terminator
    r[k] = '\0';

    // Return pointer to result string
    return r;
}
