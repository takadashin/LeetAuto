class Solution {
public:
    int driller(vector<vector<int>>& richer, vector<int>& quiet,vector<int>& ans,int index)
    {
        if(ans[index] != -1) return ans[index];

        ans[index] = index;

        for(int  i = 0; i  < richer.size();i++)
        {
            if(richer[i][1] == index) // cause richer[i][0] is the one that richer than index
            {int resultfromdeeper = driller(richer,quiet,ans,richer[i][0]);

            if(quiet[resultfromdeeper] < quiet[ans[index]]) ans[index] = resultfromdeeper;
            }


        }
        return ans[index];
    }
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        vector<int> ans(quiet.size(),-1);

        for(int i = 0;i < quiet.size();i++)
        {
            driller(richer,quiet,ans,i);
        }

        return ans;
    }
};