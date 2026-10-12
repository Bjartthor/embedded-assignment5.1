#include <mutex>
#include "decrement.h"
#include <unistd.h>
#include <stdio.h>

void decrementTask()
{
while (1)
    {
    /* Delay for 7 seconds. */
    sleep(7);
    /* Wait for the mutex to become available. */
    mtx.lock();
    gSharedVariable--;
    printf("Decrement Task: shared var is %d\n",
    gSharedVariable);
    /* Release the mutex. */
    mtx.unlock();
    }
}