#pragma once
#ifndef VEC_H
#define VEC_H
namespace valve {
    namespace math {
        class vec2i 
        {
            private:
                int x, y;
            public:
                vec2i(int xin, int yin);
                vec2i operator + (const vec2i &ref)
                {
                    return vec2i(x + ref.x, y + ref.y);
                }
                vec2i operator - (const vec2i &ref)
                {
                    return vec2i(x - ref.x, y - ref.y);
                }
                vec2i operator * (const vec2i &ref)
                {
                    return vec2i(x * ref.x, y * ref.y);
                }
                vec2i operator / (const vec2i &ref)
                {
                    return vec2i(x / ref.x, y / ref.y);
                }
                vec2i operator = (const vec2i &ref)
                {
                    return vec2i(ref.x, ref.y);
                }
        };
        
        class vec3i 
        {
            private:
                int x, y, z;
            public:
                vec3i(int xin, int yin, int zin);
                vec3i operator + (const vec3i &ref)
                {
                    return vec3i(x + ref.x, y + ref.y, z + ref.z);
                }
                vec3i operator - (const vec3i &ref)
                {
                    return vec3i(x - ref.x, y - ref.y, z - ref.z);
                }
                vec3i operator * (const vec3i &ref)
                {
                    return vec3i(x * ref.x, y * ref.y, z * ref.z);
                }
                vec3i operator / (const vec3i &ref)
                {
                    return vec2i(x / ref.x, y / ref.y, z / ref.z);
                }
                vec3i operator = (const vec3i &ref)
                {
                    return vec3i(ref.x, ref.y, ref.z);
                }
        };
    };
};

#endif