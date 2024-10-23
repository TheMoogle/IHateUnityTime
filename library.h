#ifndef IHATEUNITYTIME_LIBRARY_H
#define IHATEUNITYTIME_LIBRARY_H

#include <stdbool.h>

#if defined(_WIN32) || defined(_WIN64)
#define HYPER_EXPORT __declspec(dllexport)
#else
#define HYPER_EXPORT
#endif

HYPER_EXPORT bool Is24HourClock();

#endif //IHATEUNITYTIME_LIBRARY_H
