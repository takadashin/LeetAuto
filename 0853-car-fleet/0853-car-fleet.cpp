class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> memo;

        int n = position.size();
        double prespeed = -1;
        for(int i = 0;i < n;i++)
        {
            memo.push_back({position[i], speed[i]});
        }

        sort(memo.begin(),memo.end());

        int res = 0;
        for(int i = n-1;i >= 0;i--)
        {
            
            double speed = (double) (target - memo[i].first) /  (double)memo[i].second;
         
            if(speed >  prespeed)
            prespeed  = speed, res++;
            
        }

        return res;
    }
};