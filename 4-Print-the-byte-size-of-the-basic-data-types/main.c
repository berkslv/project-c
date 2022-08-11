#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

    int m_int;
    float m_float;
    double m_double;
    char m_char;
    long m_long;
    long long m_long_long;
    short m_short;
    unsigned int m_unsigned_int;
    unsigned long m_unsigned_long;
    unsigned long long m_unsigned_long_long;
    unsigned short m_unsigned_short;
    
    void *m_void;
    char *m_char_ptr;
    int *m_int_ptr;
    float *m_float_ptr;
    double *m_double_ptr;
    char *m_char_ptr_ptr;
    long *m_long_ptr;
    long long *m_long_long_ptr;
    short *m_short_ptr;
    unsigned int *m_unsigned_int_ptr;

    printf("============================= Variable sizes\n");

    printf("int size: %lu\n", sizeof(m_int));
    printf("float size: %lu\n", sizeof(m_float));
    printf("double size: %lu\n", sizeof(m_double));
    printf("char size: %lu\n", sizeof(m_char));
    printf("long size: %lu\n", sizeof(m_long));
    printf("long long size: %lu\n", sizeof(m_long_long));
    printf("short size: %lu\n", sizeof(m_short));
    printf("unsigned int size: %lu\n", sizeof(m_unsigned_int));
    printf("unsigned long size: %lu\n", sizeof(m_unsigned_long));
    printf("unsigned long long size: %lu\n", sizeof(m_unsigned_long_long));
    
    printf("============================= Pointer variable sizes\n");
    
    printf("void * size: %lu\n", sizeof(m_void));
    printf("char * size: %lu\n", sizeof(m_char_ptr));
    printf("int * size: %lu\n", sizeof(m_int_ptr));
    printf("float * size: %lu\n", sizeof(m_float_ptr));
    printf("double * size: %lu\n", sizeof(m_double_ptr));
    printf("char ** size: %lu\n", sizeof(m_char_ptr_ptr));
    printf("long * size: %lu\n", sizeof(m_long_ptr));
    printf("long long * size: %lu\n", sizeof(m_long_long_ptr));
    printf("short * size: %lu\n", sizeof(m_short_ptr));
    printf("unsigned int * size: %lu\n", sizeof(m_unsigned_int_ptr));

    return 0;
}