#include "minunit.h"
#include <lcthw/ringbuffer.h>
#include <assert.h>

static RingBuffer *buffer = NULL;
int max_buffer_size = 1024;
char *tests[] = {"test1 data", "test2 data", "test3 data"};
#define NUM_TESTS 3

char *test_create()
{
    buffer = RingBuffer_create(max_buffer_size);
    mu_assert(buffer != NULL, "Failed to create ringbuffer.");

    return NULL;
}

char *test_destroy()
{
    mu_assert(buffer != NULL, "Failed to make ringbuffer #2");
    RingBuffer_destroy(buffer);

    return NULL;
}

char *test_read_write()
{
    int i = 0;
    for (i = 0; i < NUM_TESTS; i++)
    {
        RingBuffer_write(buffer, tests[i], strlen(tests[i]));
        char *target = malloc(sizeof(tests[i]));
        RingBuffer_read(buffer, target, strlen(tests[i]));
        mu_assert(strcmp(target, tests[i]) == 0, "Wrong next value.");
    }
    return NULL;
}

char *all_tests()
{
    mu_suite_start();

    mu_run_test(test_create);
    mu_run_test(test_read_write);
    mu_run_test(test_destroy);

    return NULL;
}

RUN_TESTS(all_tests);
