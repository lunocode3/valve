#include "motors.h"


namespace valve {
    namespace mecha { 

        motor::motor(int e, int i, int ii)
        { 
            en = e;
            in1 = i;
            in2 = ii;
            pinMode(in2, OUTPUT); //IN2
            pinMode(in1, OUTPUT); //IN1
            pinMode(en, OUTPUT); //Enable Pin
        }

        int motor::get_mode()
        {
          return mode;
        }

        int motor::get_speed()
        {
          return speed;
        }

        void motor::start(int pwm, int m)
        {
          mode = m;
          speed = pwm;
          if(mode >= LUNO_MOTOR_FW)
          {
            digitalWrite(in2, HIGH);
            digitalWrite(in1, LOW);
            analogWrite(en, speed);
          }
          else
          {
            digitalWrite(in2, LOW);
            digitalWrite(in1, HIGH);
            analogWrite(en, speed);
          }
        }

        void motor::brake()
        {
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW); 
            digitalWrite(in1, LOW);
            digitalWrite(en, LOW); 
        }
    };
};