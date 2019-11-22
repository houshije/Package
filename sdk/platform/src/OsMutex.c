#include "Head.h"
#include <pthread.h>
#include "include/OsMutex.h"
#include "include/OsStand.h"

Handle* osMutexCreate(void)
{
    pthread_mutex_t* pMutex = (pthread_mutex_t*)osMalloc(sizeof(pthread_mutex_t));

    if (pMutex) {
        pthread_mutex_init(pMutex, NULL);
    }

    return pMutex;
}

Handle osMutexDestroy(Handle* inMutex)
{
    pthread_mutex_t* pMutex = (pthread_mutex_t*)inMutex;

    if (pMutex) {
        pthread_mutex_destroy(pMutex);
        osFree(pMutex);
        pMutex = NULL;
    }

    return;
}

Handle osMutexLock(Handle* inMutex)
{
    pthread_mutex_t* pMutex = (pthread_mutex_t*)inMutex;

    if (pMutex) {
        pthread_mutex_lock(pMutex);
    }

    return;
}

Handle osMutexUnlock(Handle* inMutex)
{
    pthread_mutex_t* pMutex = (pthread_mutex_t*)inMutex;

    if (pMutex) {
        pthread_mutex_unlock(pMutex);
    }

    return;
}
