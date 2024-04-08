#include "minunit.h"
#include <assert.h>
#include <lcthw/list_algos.h>
#include <string.h>
#include <time.h>

#define NUM_VALUES 1024 * 30
int values[NUM_VALUES];

List *create_words() {
    int i = 0;
    List *words = List_create();

    for (i = 0; i < NUM_VALUES; i++) {
        values[i] = rand();
        List_push(words, &values[i]);
    }

    return words;
}

int is_sorted(List *words) {
    LIST_FOREACH(words, first, next, cur) {
        if (cur->next && strcmp(cur->value, cur->next->value) > 0) {
            debug("%s %s", (char *)cur->value, (char *)cur->next->value);
            return 0;
        }
    }

    return 1;
}

char *test_bubble_sort() {
    List *words = create_words();

    // should work on a list that needs sorting
    int rc = List_bubble_sort(words, (List_compare)strcmp);
    mu_assert(rc == 0, "Bubble sort failed.");
    mu_assert(is_sorted(words), "Words are not sorted after bubble sort.");

    // should work on an abubble sortmpty list
    words = List_create(words);
    rc = List_bubble_sort(words, (List_compare)strcmp);
    mu_assert(rc == 0, "Bubble sort failed on empty list.");
    mu_assert(is_sorted(words), "Words should be sorted if empty.");

    List_destroy(words);

    return NULL;
}

char *test_merge_sort() {
    List *words = create_words();

    // should work on a list that needs sorting
    List *res = List_merge_sort(words, (List_compare)strcmp);
    mu_assert(is_sorted(res), "Words are not sorted after merge sort.");

    List *res2 = List_merge_sort(res, (List_compare)strcmp);
    mu_assert(is_sorted(res), "Should still be sorted after merge sort.");

    List_destroy(res2);
    List_destroy(res);
    List_destroy(words);
    return NULL;
}

char *test_insert_sort() {
    List *words = create_words();
    List *res = List_insert_sort(words, (List_compare)strcmp);
    mu_assert(is_sorted(res), "Words are not sorted after insert sort.");

    List *res2 = List_insert_sort(res, (List_compare)strcmp);
    mu_assert(is_sorted(res), "Should still be sorted after insert sort.");

    List_destroy(res2);
    List_destroy(res);
    List_destroy(words);

    return NULL;
}

char *all_tests() {
    mu_suite_start();

    time_t bubble_time = time(0);
    mu_run_test(test_bubble_sort);
    printf("Buuble sort spend time: %lds\n", time(0) - bubble_time);

    time_t merge_time = time(0);
    mu_run_test(test_merge_sort);
    printf("Merge sort spend time: %lds\n", time(0) - merge_time);

    time_t insert_time = time(0);
    mu_run_test(test_insert_sort);
    printf("Insert sort spend time: %lds\n", time(0) - insert_time);

    return NULL;
}

RUN_TESTS(all_tests);
