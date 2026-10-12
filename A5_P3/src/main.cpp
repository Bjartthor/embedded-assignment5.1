#include <thread>
#include "shared.h"
#include "increment.h"
#include "decrement.h"


int32_t gSharedVariable = 0;
std::mutex mtx;

int main(void)
{
    std::thread increment (incrementTask);
    std::thread decrement (decrementTask);

    increment.join();
    decrement.join();
    return 0;
}