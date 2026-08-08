class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        map<int,int> counter;
        for(auto x: hand) counter[x]++;
        for(auto x: counter)
        {
            if(counter[x.first] == 0) continue;
            int need = counter[x.first];
            for(int i = 0; i < groupSize;i++)
            {
                if(counter[x.first + i] < need) return false;
                counter[x.first + i] -= need;
            }
        }
        return true;
    }
};