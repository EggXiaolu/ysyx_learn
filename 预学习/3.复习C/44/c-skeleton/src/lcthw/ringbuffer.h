#ifndef _lcthw_RingBuffer_h
#define _lcthw_RingBuffer_h
#include <lcthw/bstrlib.h>
typedef struct RingBuffer
{
    char *buffer;
    int length;
    int start;
    int end;
} RingBuffer;

RingBuffer *RingBuffer_create(int length);

void RingBuffer_destroy(RingBuffer *buffer);

int RingBuffer_read(RingBuffer *buffer, char *target, int amount);

int RingBuffer_write(RingBuffer *buffer, char *data, int length);

int RingBuffer_empty(RingBuffer *buffer);

int RingBuffer_full(RingBuffer *buffer);

int RingBuffer_available_data(RingBuffer *buffer);

int RingBuffer_available_space(RingBuffer *buffer);

bstring RingBuffer_gets(RingBuffer *buffer, int amount);

// 数据空间的大小
#define RingBuffer_available_data(B) (((B)->end + 1) % (B)->length - (B)->start - 1)

// 剩余空间的大小
#define RingBuffer_available_space(B) ((B)->length - (B)->end - 1)

// 是否满了
#define RingBuffer_full(B) (RingBuffer_available_data((B)) - (B)->length == 0)

// 是否为空
#define RingBuffer_empty(B) (RingBuffer_available_data((B)) == 0)

// 写入数据
#define RingBuffer_puts(B, D) RingBuffer_write((B), bdata((D)), blength((D)))

// 获取数据
#define RingBuffer_get_all(B) RingBuffer_gets((B), RingBuffer_available_data((B)))

// 获取起始位置
#define RingBuffer_start_at(B) ((B)->buffer + (B)->start)

// 获取结束位置
#define RingBuffer_ends_at(B) ((B)->buffer + (B)->end)

// 读取处理start
#define RingBuffer_commit_read(B, A) ((B)->start = ((B)->start + (A)) % (B)->length)

// 写入处理write
#define RingBuffer_commit_write(B, A) ((B)->end = ((B)->end + (A)) % (B)->length)

#endif