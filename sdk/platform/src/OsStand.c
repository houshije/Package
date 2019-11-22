#include "Head.h"
#include "include/OsStand.h"

Handle* osMalloc(unsigned int inSize)
{
    return (malloc(inSize));
}

Handle* osCalloc(unsigned int inNum, unsigned int inSize)
{
    return (calloc(inNum, inSize));
}

Handle osFree(Handle* inPtr)
{
    if (inPtr) {
        free(inPtr);
        inPtr = NULL;
    }
}

Handle osMemset(Handle* ioDest, int inVal, unsigned int inLen)
{
    if (!ioDest) {
        return;
    }

    memset(ioDest, inVal, inLen);
}

Handle osMemcpy(Handle* ioDest, const Handle* inSrc, unsigned int inLen)
{
    if (!ioDest || !inSrc) {
        return;
    }

    memcpy(ioDest, inSrc, inLen);
}

int osMemcmp(const Handle* inStr1, const Handle* inStr2, unsigned int inLen)
{
    if (!inStr1) {
        return -1;
    }

    if (!inStr2) {
        return 1;
    }

    return memcmp(inStr1, inStr2, inLen);
}

Handle osMemmove(Handle* ioDest, const Handle* inSrc, unsigned int inLen)
{
    if (!ioDest || !inSrc) {
        return;
    }

    memmove(ioDest, inSrc, inLen);
}

unsigned int osStrlen(const char* inStr)
{
    return (inStr ? strlen(inStr) : 0);
}

char* osStrchr(const char* inStr, char inChar)
{
    return (inStr ? strchr(inStr, inChar) : NULL);
}

char* osStrrchr(const char* inStr, char inChar)
{
    return (inStr ? strrchr(inStr, inChar) : NULL);
}

char* osStrstr(const char* inStr1, const char* inStr2)
{
    return ((inStr1 && inStr2) ? strstr(inStr1, inStr2) : NULL);
}

char* osStrcasestr(const char* inStr1, const char* inStr2)
{
    return ((inStr1 && inStr2) ? strstr(inStr1, inStr2) : NULL);
}

int osStrcmp(const char* inStr1, const char* inStr2)
{
    if (!inStr1) {
        return -1;
    }

    if (!inStr2) {
        return 1;
    }

    return strcmp(inStr1, inStr2);
}

int osStrncmp(const char* inStr1, const char* inStr2, unsigned int inLen)
{
    if (!inStr1) {
        return -1;
    }

    if (!inStr2) {
        return 1;
    }

    return strncmp(inStr1, inStr2, inLen);
}

int osStrcasecmp(const char* inStr1, const char* inStr2)
{
    if (!inStr1) {
        return -1;
    }

    if (!inStr2) {
        return 1;
    }

    return strcasecmp(inStr1, inStr2);
}

int osStrncasecmp(const char* inStr1, const char* inStr2, unsigned int inLen)
{
    if (!inStr1) {
        return -1;
    }

    if (!inStr2) {
        return 1;
    }

    return strncasecmp(inStr1, inStr2, inLen);
}

char* osStrcpy(char* ioDest, const char* inSrc)
{
    if (!ioDest || !inSrc) {
        return ioDest;
    }
    return strcpy(ioDest, inSrc);
}

char* osStrncpy(char* ioDest, const char* inSrc, unsigned int inLen)
{
    if (!ioDest || !inSrc) {
        return ioDest;
    }
    return strncpy(ioDest, inSrc, inLen);
}

char* osStrcat(char* ioDest, const char* inSrc)
{
    if (!ioDest || !inSrc) {
        return ioDest;
    }
    return strcat(ioDest, inSrc);
}

char* osStrncat(char* ioDest, const char* inSrc, unsigned int inLen)
{
    if (!ioDest || !inSrc) {
        return ioDest;
    }
    return strncat(ioDest, inSrc, inLen);
}

