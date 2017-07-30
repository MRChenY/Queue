/*************************************************************************
    > File Name: Random.h
    > Author: FengYounan
    > Mail: fengyounan_1993@163.com
    > Created Time: 2017-07-29
 ************************************************************************/
#ifndef __RANDOM_H__
#define __RANDOM_H__

#include <cstdlib>
#include <cmath>

class   Random {
public:
    // [0, 1) 之间的服从均匀分布的随机值
    static double uniform(double max = 1){
        return ((double)std::rand() / (RAND_MAX))*max;
    }
};
#endif
