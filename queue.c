#include "queue.h"

struct queue *queue_push(struct queue *tail, int e)
{
    struct queue *nxt = malloc(sizeof(struct queue));
    int r = (nxt != NULL);
    if (r)
    {
        nxt->data = e;
        if (tail == NULL)
            nxt->next = nxt;
        else
        {
            nxt->next = tail->next;
            tail->next = nxt;
        }
    }
    return nxt;
}
struct queue *queue_pop(struct queue *tail)
{
    if (tail == NULL)
        return NULL;
    if (tail->next == tail)
    {
        free(tail);
        return NULL;
    }
    struct queue *t = tail->next;
    tail->next = tail->next->next;
    free(t);
    return tail;
}

int queue_peek(struct queue *tail)
{
    return tail->data;
}
