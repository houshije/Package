#ifndef _OSSTAND_H
#define _OSSTAND_H

#ifdef __cplusplus
extern "C" {
#endif

/**
* @Synopsis package malloc
*
* @Param:inSize - the size of malloc
*
* @Returns: the address of memory
*/
Handle* osMalloc(unsigned int inSize);

/**
* @Synopsis package calloc
*
* @Param:inNum - Number of objects
* @Param:inSize - Object size
*
* @Returns: the address of memory
*/
Handle* osCalloc(unsigned int inNum, unsigned int inSize);

/**
* @Synopsis package free
*
* @Param:inPtr - Pointer to be released
*
* @Returns: None
*/
Handle osFree(Handle* inPtr);

/**
* @Synopsis package memset
*
* @Param:ioDest - Memory space address to be set
* @Param:inVal - The value to be set
* @Param:inLen - Len of the memory area pointed
*
* @Returns: None
*/
Handle osMemset(Handle* ioDest, int inVal, unsigned int inLen);

/**
* @Synopsis package memcpy
*
* @Param:ioDest - Dest pointer
* @Param:inSrc - Src pointer
* @Param:inLen - Number of bytes to copy
*
* @Returns: None
*/
Handle osMemcpy(Handle* ioDest, const Handle* inSrc, unsigned int inLen);

/**
* @Synopsis package memcmp
*
* @Param:inStr1 - the first string
* @Param:inStr2 - the second string
* @Param:inLen - number of bytes to compare
*
* @Returns: < 0 inStr1 < inStr2,
*           = 0 inStr1 = inStr2,
*           > 0 inStr1 > inStr2
*/
int osMemcmp(const Handle* inStr1, const Handle* inStr2, unsigned int inLen);

/**
* @Synopsis package memmove
*
* @Param:ioDest - Dest pointer
* @Param:inSrc - Src pointer
* @Param:inLen - Number of bytes to copy
*
* @Returns: None
*/
Handle osMemmove(Handle* ioDest, const Handle* inSrc, unsigned int inLen);

/**
* @Synopsis package strlen
*
* @Param:inStr - the string pointer
*
* @Returns: the lenght of the string
*/
unsigned int osStrlen(const char* inStr);

/**
* @Synopsis package strchr
*
* @Param:inStr - the string
* @Param:inChar - the character
*
* @Returns: a pointer to the first occurrence of the character
*   inChar in the string inStr or NULL if the character is no found.
*/
char* osStrchr(const char* inStr, char inChar);

/**
* @Synopsis package strrchr
*
* @Param:inStr - The string
* @Param:inChar - The character
*
* @Returns: a pointer to the last occurrence of the character
*   inChar in the string inStr or NULL if the character is no found.
*/
char* osStrrchr(const char* inStr, char inChar);

/**
* @Synopsis package strstr
*
* @Param:inStr1 - String within which to search
* @Param:inStr2 - string to search for within inStr1
*
* @Returns: a pointer to the first occurrence of the string inStr2
*    in the string inStr1 or NULL if the string is no found.
*/
char* osStrstr(const char* inStr1, const char* inStr2);

/**
* @Synopsis package strcasestr (ignore case)
*
* @Param:inStr1 - String within which to search
* @Param:inStr2 - string to search for within inStr1
*
* @Returns: a pointer to the first occurrence of the string inStr2
*    in the string inStr1 or NULL if the string is no found.
*/
char* osStrcasestr(const char* inStr1, const char* inStr2);

/**
* @Synopsis package strcmp
*
* @Param:inStr1 - the first string
* @Param:inStr2 - the second string
*
* @Returns: < 0 inStr1 < inStr2
*           = 0 inStr1 = inStr2
*           > 0 inStr1 > inStr2
*/
int osStrcmp(const char* inStr1, const char* inStr2);

/**
* @Synopsis package strncmp compares only the first (at most) n bytes of s1 and s2
*
* @Param:inStr1 - the first string
* @Param:inStr2 - the second string
* @Param:inLen - Number of character to compare
*
* @Returns: < 0 inStr1 < inStr2
*           = 0 inStr1 = inStr2
*           > 0 inStr1 > inStr2
*/
int osStrncmp(const char* inStr1, const char* inStr2, unsigned int inLen);

/**
* @Synopsis package strcasecmp (ignore case)
*
* @Param:inStr1 - the first string
* @Param:inStr2 - the second string
*
* @Returns: < 0 inStr1 < inStr2
*           = 0 inStr1 = inStr2
*           > 0 inStr1 > inStr2
*/
int osStrcasecmp(const char* inStr1, const char* inStr2);

/**
* @Synopsis package strncasecmp (ignore case)
*
* @Param:inStr1 - the first string
* @Param:inStr2 - the second string
* @Param:inLen - the number of character to compare
*
* @Returns: < 0 inStr1 < inStr2
*           = 0 inStr1 = inStr2
*           > 0 inStr1 > inStr2
*/
int osStrncasecmp(const char* inStr1, const char* inStr2, unsigned int inLen);

/**
* @Synopsis package strcpy
*
* @Param:ioDest - the dest string
* @Param:inSrc - the source string
*
* @Returns: A pointer to the dest string
*/
char* osStrcpy(char* ioDest, const char* inSrc);

/**
* @Synopsis package strncpy
*
* @Param:ioDest - the dest string
* @Param:inSrc - the source string
* @Param:inLen - the number of character to copy
*
* @Returns: A pointer to the dest string
*/
char* osStrncpy(char* ioDest, const char* inSrc, unsigned int inLen);

/**
* @Synopsis package strcat
*
* @Param:ioDest - the dest string
* @Param:inSrc - the soure string
*
* @Returns: A pointer to the dest string
*/
char* osStrcat(char* ioDest, const char* inSrc);

/**
* @Synopsis package strncat
*
* @Param:ioDest - the dest string
* @Param:inSrc - the source string
* @Param:inLen - the number of character to cat
*
* @Returns: A pointer to the dest string
*/
char* osStrncat(char* ioDest, const char* inSrc, unsigned int inLen);

#ifdef __cplusplus
}
#endif

#endif
