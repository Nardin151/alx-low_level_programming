# Problems and their Description :
________________________________

[main.h](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/main.h) : Header file that contains all the functions' prototype
________________________________

[0-strcat.c](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c) : Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest
________________________________
[1-strncat.c](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c) : Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest
________________________________
[2-strncpy.c](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c) : Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy
________________________________
[3-strcmp.c](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c) : Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp
________________________________
[4-rev_array.c](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c) : Write a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array
________________________________
[5-string_toupper.c]() : Wri* ://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.cte a function that changes all lowercase letters of a string to uppercase.

Prototype: char *string_toupper(char *);
________________________________
[6-cap_string.c](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c) : Write a function that capitalizes all words of a string.

Prototype: char *cap_string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
________________________________
[7-leet.c](https://github.com/Nardin151/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c) : Write a function that encodes a string into 1337.

- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
- Prototype: char *leet(char *);
- You can only use one if in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation
________________________________
