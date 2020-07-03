#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *queue_push(struct queue *tail, int e);
struct queue *queue_pop(struct queue *tail);
int queue_peek(struct queue *tail);
