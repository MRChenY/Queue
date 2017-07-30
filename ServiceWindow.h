/*************************************************************************
    > File Name: ServiceWindow.h
    > Author: FengYounan
    > Mail: fengyounan_1993@163.com
    > Created Time: 2017-07-29
 ************************************************************************/
#ifndef __SERVICE_WINDOW_H__
#define __SERVICE_WINDOW_H__

#include "Node.h"

enum WindowState {
    SERVICE,
    IDLE,
};

class ServiceWindow {
public:
    inline ServiceWindow() {
        window_status = IDLE;
    };

    inline bool isIdle() const {
        if (window_status == IDLE) {
            return true;
        } else {
            return false;
        }
    }

    inline void serveCustomer(Customer &customer) {
        this->customer = customer;
    }

    inline void setBusy() {
        window_status = SERVICE;
    }

    inline void setIdle() {
        window_status = IDLE;
    }

    inline int getCustomerArriveTime() {
        return customer.arrive_time;
    }

    inline int getCustomerDuration() {
        return customer.duration;
    }

private:
    Customer customer;
    WindowState window_status;
};

#endif
