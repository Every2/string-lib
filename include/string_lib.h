#ifndef STRING_LIB_H
#define STRING_LIB_H

#include <stdio.h>

size_t len(char * str) {
    size_t len = 0;
    while(*str != '\0') {
        len++;
        str++;
    }
    return len;
}

#endif //STRING_LIB_H
