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
	 int i =0;
	 int l;

	 while (l != '0')
		 l++;
	 for (i = 0; i < l / 2; i++)
	 {
		 ch = s[i];
		 s[i] = s[l - 1 - i];
		 s[l - 1 - i] = ch;
	 }
