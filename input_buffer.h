#include <string.h>
#include <stdbool.h>

/*
A small wrapper around the state it's needed for interacting with the getline() function of the stdio lib.
*/

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;


// Exported API.
InputBuffer* new_input_buffer();
void close_input_buffer(InputBuffer* input_buffer);
