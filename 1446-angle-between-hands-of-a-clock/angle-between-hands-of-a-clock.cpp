class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minangle=minutes*6;
        double hrangle=(hour%12)*30 +minutes*0.5;
        double angle=abs(hrangle-minangle);
        return min(angle,360-angle);
    }
};