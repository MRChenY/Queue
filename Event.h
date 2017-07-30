/*************************************************************************
    > File Name: Event.h
    > Author: FengYounan
    > Mail: fengyounan_1993@163.com
    > Created Time: 2017-07-29
 ************************************************************************/
#ifndef __EVENT_H__
#define __EVENT_H__

#include "Random.h"
#define RANDOM_PARAMETER 100

struct Event {
    int occur_time;

    // 使用-1表示到达事件， >=0 表示离开事件，同时数值表示所离开的服务窗口
    int event_type;

    Event* next;

    // 默认为到达事件，发生事件随机
    Event(int occur_time = Random ::uniform(RANDOM_PARAMETER),
            int event_type = -1):
        occur_time(occur_time),
        event_type(event_type),
        next(NULL) {}
};

#endif
