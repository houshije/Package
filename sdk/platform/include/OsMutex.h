#ifndef _MUTEX_H
#define _MUTEX_H

#ifdef __cplusplus
extern "C" {
#endif
/**
* @Synopsis Create a mutex
*
* @Returns: Handle to the mutex
*/
Handle* osMutexCreate(void);

/**
* @Synopsis Destory a mutex
*
* @Param:inMutex - The mutex to be destroyed
*
* @Returns: None
*/
Handle osMutexDestroy(Handle* inMutex);

/**
* @Synopsis Lock the mutex
*
* @Param:inMutex - The mutex to be lock
*
* @Returns:None
*/
Handle osMutexLock(Handle* inMutex);

/**
* @Synopsis Unlock the mutex
*
* @Param:inMutex - The mutex to be unlock
*
* @Returns:None
*/
Handle osMutexUnlock(Handle* inMutex);

#ifdef __cplusplus
}
#endif

#endif
