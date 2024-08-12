#include "vec.h"

namespace valve {
    namespace math { 
        vec2i::vec2i(int xin, int yin)
        {
            x = xin;
            y = yin;
        }
        vec3i::vec3i(int xin, int yin, int zin)
        {
            x = xin;
            y = yin;
            z = zin;
        }
    };
};