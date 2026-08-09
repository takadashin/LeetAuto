class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> leftscan;
        vector<int> rightscan;
        int n = seats.size();
        int counter = 0;
        for(int i = 0; i < n;i++)
        {
            if(seats[i] != 0)
            counter = 0;
            else
            counter++;
            leftscan.push_back(counter);
        }

        for(int i = n-1; i >= 0;i--)
        {
            if(seats[i] != 0)
            counter = 0;
            else
            counter++;
            rightscan.push_back(counter);
        }
        reverse(rightscan.begin(),rightscan.end());
        int res = 0;
        for(int i = 0; i < n;i++)
        {
            res = max(res,min(leftscan[i],rightscan[i]));
        }
       
        return max( max( res , leftscan[n-1]),rightscan[0]);



    }
};