#include "library.h"

#if defined(_WIN32) || defined(_WIN64)
    // Windows specific includes
    #include <windows.h>
#else
    // Linux specific includes
    #include <locale.h>
    #include <langinfo.h>
    #include <string>
#endif

#include <iostream>

bool Is24HourClock() {
#if defined(_WIN32) || defined(_WIN64)
    // Windows code
    wchar_t timeFormat[80];

    // Retrieve the time format from the user's locale settings
    if (GetLocaleInfoEx(LOCALE_NAME_USER_DEFAULT, LOCALE_STIMEFORMAT, timeFormat, sizeof(timeFormat) / sizeof(wchar_t)) > 0) {
        std::wstring format(timeFormat);

        // Check for the presence of 'H' (24-hour) or 'h' (12-hour)
        if (format.find(L"H") != std::wstring::npos) {
            return true;  // 24-hour format
        }
    }
    return false;  // 12-hour format

#else
    // Linux code
    // Set locale based on the environment
    setlocale(LC_TIME, "");

    // Retrieve the time format string
    std::string timeFormat = nl_langinfo(T_FMT);

    // Look for 'H' in the time format string (24-hour format)
    if (timeFormat.find("%H") != std::string::npos) {
        return true;  // 24-hour format
    }
    return false;  // 12-hour format
#endif
}