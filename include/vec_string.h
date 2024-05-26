#ifndef VEC_STRING_H
#define VEC_STRING_H
#include <stddef.h>

typedef struct {
    char *data;
    size_t capacity;
    size_t size;
} String;


String* new();
String* with_capacity(size_t capacity);
void delete(String str);
#endif //VEC_STRING_H
