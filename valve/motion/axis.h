namespace lunomotion {
    class angle {
    private:
        float a;
    public:
        angle(float ain);
        angle operator + (float ref)
        {
            if((a + ref) >= 360)
                return angle(0);
            else
                return angle(a + ref);
        }
        angle operator - (float ref)
        {
            if((a - ref) < 0)
                return angle(359);
            else
                return angle(a - ref);
        }
        angle operator = (float ref)
        {
            if((a - ref) < 0)
                return angle(359);
            if((a + ref) >= 360)
                return angle(0);
            else
                return angle(ref);
        }
    };
    
    class torque {
    private:
        float val;
    public:
        torque(float tin);
        torque operator + (float ref)
        {
            return torque(val + ref);
        }
        torque operator - (float ref)
        { 
            return torque(val - ref);
        }
        torque operator = (float ref)
        { 
            return torque(ref);
        }
    };

    class axis {
    private:
        torque tor;
        angle ang;
    public:
        axis(angle ain);
    };
};