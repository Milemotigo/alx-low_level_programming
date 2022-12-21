#include "main.h"
/**
 * rev_string - A funtion that reverses a string
 *
 * @s: string
 *
 */
void rev_string(char *s)
{
        int l;
        int i;
        char ch;
        while (l != '\0')
                l++;
        for (i = 0; i < l / 2; i++);
        ch  = s[i];
        s[i] = s[l -  1 - i];
        s[l -  1 - i] = ch;
        _putchar(%s, 's');
}
