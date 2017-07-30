/*************************************************************************
    > File Name: Node.h
    > Author: FengYounan
    > Mail: fengyounan_1993@163.com
    > Created Time: 2017-07-29
 ************************************************************************/
#ifndef __NODE_H__
#define __NODE_H__

#include "Random.h"

#define RANDOM_PARAMETER 100

struct Node {
    int arrive_time;
    int duration;
    struct Node* next;

    // 默认到达事件为0，需要服务的事件是随机的
    Node(int arrive_time = 0,
            int duration = Random::getRandom(EXPONENTAIL, 0.1)):
        arrive_time(arrive_time),
        duration(duration),
        next(NULL) {}
};

typedef struct Node Node;
typedef struct Node Customer;

#endif
