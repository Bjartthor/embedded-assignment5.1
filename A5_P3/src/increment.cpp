#include <mutex>
#include "increment.h"
#include <unistd.h>
#include <stdio.h>

void incrementTask()
{
while (1)
    {
    /* Delay for 3 seconds. */
    sleep(3);
    /* Wait for the mutex to become available. */
    mtx.lock();
    gSharedVariable++;
    printf("Increment Task: shared var is %d\n",
    gSharedVariable);
    /* Release the mutex for other task to use. */
    mtx.unlock();
    }
}
