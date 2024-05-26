#include "../include/vec_string.h"
#include "../include/string_lib.h"
#include <stdlib.h>

void delete(String str) {
    free(str.data);
}

///Generate a empty String, if you know the String size use with_capacity function
String* new() {
    String* str = malloc(sizeof(String));
    str->data = (char*)malloc(sizeof(char));
    str->size = 0;
    str->capacity = 1;
    return str;
}

///If you know the size of string or wanna avoid reallocation overhead use this function
String* with_capacity(unsigned int capacity) {
    String* str = malloc(sizeof(String));
    str->data = (char*)malloc(sizeof(char));
    str->size = 0;
    str->capacity = capacity;
    return str;
}


