class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int last = -1;

        int n =  seats.size();
        int res = 0;
        for(int i = 0;i < n;i++)
        {
            if(seats[i] != 0){
                res = last < 0? i: max(res,(i-last) / 2);
                last = i;
                cout << i << endl;
                }

        }
        if(seats[n-1]  == 0) res= max(res,n-1-last);
        return res ;
    }
};