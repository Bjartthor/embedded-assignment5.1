#pragma once

#include <mutex>
#include <stdint.h>


extern std::mutex mtx;
extern int32_t gSharedVariable;