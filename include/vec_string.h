#ifndef VEC_STRING_H
#define VEC_STRING_H

typedef struct {
    char *data;
    int capacity;
    int size;
} String;


String* new();
String* with_capacity(unsigned int capacity);
void delete(String str);
#endif //VEC_STRING_H
