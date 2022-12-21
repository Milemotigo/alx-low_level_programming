#include "main.h" 
 /** 
  * rev_string - reverses a string 
  * _putchar - print each character 
  * @s: char to check 
  * 
  * Description: This will reverse a string 
  * Return: 0 is success 
  */ 
 void rev_string(char *s) 
 {
	 char ch;
	 int i, l1, l2;
	 l1 = 0;
	 l2 = 0;
	 while (s[l1] != '\0')
		 l1++;
	 l2 = l1 - 1;
	 for (i = 0; i < l1 / 2; i++)
	 {
		 ch = s[i];
		 s[i] = s[l2];
		 s[l2] = ch;
		 l2 -= 1;
	 }
 }
