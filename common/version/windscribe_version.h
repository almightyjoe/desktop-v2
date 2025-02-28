#ifndef WINDSCRIBE_VERSION_H
#define WINDSCRIBE_VERSION_H

#define WINDSCRIBE_MAJOR_VERSION  2
#define WINDSCRIBE_MINOR_VERSION 3
#define WINDSCRIBE_BUILD_VERSION 15
// only one of these should be enabled; neither -> stable
#define WINDSCRIBE_IS_BETA
// #define WINDSCRIBE_IS_GUINEA_PIG

// #define WINDSCRIBE_IS_STAGING

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define WINDSCRIBE_VERSION_STR  STR(WINDSCRIBE_MAJOR_VERSION) "." STR(WINDSCRIBE_MINOR_VERSION) " Build " STR(WINDSCRIBE_BUILD_VERSION)
#define WINDSCRIBE_VERSION_STR_UNICODE  STR(WINDSCRIBE_MAJOR_VERSION) L"." STR(WINDSCRIBE_MINOR_VERSION) L" Build " STR(WINDSCRIBE_BUILD_VERSION)
#define WINDSCRIBE_4DIGIT_VERSION_STR  STR(WINDSCRIBE_MAJOR_VERSION) ".0." STR(WINDSCRIBE_MINOR_VERSION) "." STR(WINDSCRIBE_BUILD_VERSION)

#define WINDSCRIBE_COPYRIGHT_STR "Copyright (C) 2021 Windscribe Limited"

#endif // WINDSCRIBE_VERSION_H

