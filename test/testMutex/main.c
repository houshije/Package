#include "Head.h"
#include "include/OsMutex.h"
#include <pthread.h>

void* thread(void* arg)
{
    pthread_mutex_t* pMutex = (pthread_mutex_t*)arg;
    
    printf("pthread_1\n");

    osMutexLock(pMutex);
    printf("thread Mutex is lock!\n");
    sleep(3);
    osMutexUnlock(pMutex);
}

void main()
{
    pthread_mutex_t* pMutex;
    pMutex = osMutexCreate();
    if (!pMutex) {
        printf("Mutex create is error!\n");
    }
    osMutexLock(pMutex);
    pthread_t pid;
    int ret;
    ret = pthread_create(&pid, NULL, thread, pMutex);
    sleep(5);
    printf("main is mutex is lock\n");
    sleep(3);
    osMutexUnlock(pMutex);
    sleep(3);
    printf("main is mutex is unlock\n");
    pthread_join(pid, NULL);
    
    osMutexDestroy(pMutex);
    return;
}
