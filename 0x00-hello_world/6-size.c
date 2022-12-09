#include <stdio.h>                                                                                    

int main(void) {                                                                                      

	                                                                                                      

	char c;                                                                                               
        int i;
        long int li;
        long long int lli;
        float f;
	printf("size of a char: %ld byte(s).\n",(long unsigned int)sizeof(c));
        printf("size of an int: %ld byte(s).\n",(long unsigned int)sizeof(i));
        printf("size of a long int: %ld byte(s).\n",(long unsigned int)sizeof(li));
        printf("size of a long long int: %ld byte(s).\n",(long unsigned int)sizeof(lli));
        printf("size of a float: %ld byte(s).\n",(long unsigned int)sizeof(f));

	return 0;                                                                                             

}        
