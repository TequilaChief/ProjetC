#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 main()
 {
 char *location, buf2[80], buf1[] = "alex bob charlie david frank";
 /* Input the strings. */
 printf("Enter the target string: ");
 gets(buf2);
 /* Perform the search. */
 location = strstr(buf1, buf2);
 if ( location == NULL )
 printf("No match was found.\n");
 else
 printf("%s was found at position %d.\n", buf2, location-buf1);
 return(0);
     
 }