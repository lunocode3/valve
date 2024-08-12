#include "axis.h"

namespace valve {
    namespace motion { 
        angle::angle(float ain)
        {
            a = ain;
        }
        
        torque::torque(float tin)
        {
            val = tin;
        }

        axis::axis(angle ain)
        {
            tor = 0.0f;
            ang = ain;
        }
    };
};