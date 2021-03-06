// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1 , r = n ;
        while(l <= r)
        {
            long long mid = l + (r-l)/2;
            if(isBadVersion(mid) == true)
                r = mid-1;
            else if(isBadVersion(mid) == false)
                l = mid+1;
        }
        return l ;
    }
};