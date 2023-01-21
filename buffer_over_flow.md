Buffer over flow is when the compiler goes out and allocates way more memory than initially allocated.

Example.

```C
#include <stdio.h>
int main(void)
{
Char name[5];
/* 
Use scanf to get in from User
*/

scanf("%s", name);

/* The buffer size is 5 but if the user input a name with letters greater than 5 then that will cause a buffer over flow not a error that the compiler gave the variable more memory space than expected/allocated
*/

printf("Hello %s", name);
}
```
