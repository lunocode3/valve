#pragma once
#ifndef MOTORS_H
#define MOTORS_H

#include "../motion/axis.h"

#define LUNO_MOTOR_MAX 255
#define LUNO_MOTOR_FW 0
#define LUNO_MOTOR_BW 1

using namespace lunomotion;

namespace lunomecha {

    class motor{
    private:
        int mode;
        int speed;
        int en;
        int in1;
        int in2;
        axis ax(angle(0));
    public:
        motor(int e, int i, int ii);
        void start(int pwm, int mode);
        void brake();
        int get_mode();
        int get_speed();
    };
    
}
#endif 