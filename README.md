# 42_Piscine_C03  
  
C Piscine C 03  
This repository contains solutions for the C Piscine C 03 module. The focus of this module is on string manipulation, with exercises that   involve reproducing common C standard library functions. Below is a summary of each exercise and the key concepts learned.  
  
Exercises Overview  
  
- Exercise 00: ft_strcmp  
  
Objective: Reproduce the behavior of the strcmp function.  
  
Prototype:  
  
        int ft_strcmp(char *s1, char *s2);  
  
Key Learning: Understanding how to compare two strings character by character.  
  
- Exercise 01: ft_strncmp  
  
Objective: Reproduce the behavior of the strncmp function.  
  
Prototype: 
    
        int ft_strncmp(char *s1, char *s2, unsigned int n);  
  
Key Learning: Implementing string comparison up to a given number of characters.  
  
- Exercise 02: ft_strcat  
  
Objective: Reproduce the behavior of the strcat function.  
  
Prototype: 
  
        char *ft_strcat(char *dest, char *src);  
    
Key Learning: Concatenating two strings by appending the src string to the dest string.  
  
- Exercise 03: ft_strncat  
  
Objective: Reproduce the behavior of the strncat function.  
  
Prototype:  
  
        char *ft_strncat(char *dest, char *src, unsigned int nb);  
  
Key Learning: Concatenating two strings, but only up to a specified number of characters from src.  
  
- Exercise 04: ft_strstr  
  
Objective: Reproduce the behavior of the strstr function.  
  
Prototype: 
  
        char *ft_strstr(char *str, char *to_find);  
  
Key Learning: Finding a substring within a string.  
  
- Exercise 05: ft_strlcat  
  
Objective: Reproduce the behavior of the strlcat function.  
  
Prototype: 
  
        unsigned int ft_strlcat(char *dest, char *src, unsigned int size);  
  
Key Learning: Safely concatenating strings while ensuring the result fits within a given buffer size.  
    
Learning Focus  
  
String manipulation: Gain a deeper understanding of how strings are handled in C, including how to iterate over strings, perform   comparisons, and concatenate them.  
Pointer manipulation: Practice working with pointers, especially when handling string data and memory boundaries.  
Memory safety: Ensure that string operations do not cause buffer overflows or access invalid memory.  
  