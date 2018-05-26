class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> m;
        int l=tasks.size();
        int count=0;
        int res=0;
        
        for(int i=0;i<l;i++)
        {
            m[tasks[i]]++;
            count=max(count,m[tasks[i]]);
        }
        
        res=(count-1)*(n+1);
        
        for(auto ma:m)
        {
            if(ma.second==count)
                res++;
        }
        
        res=max(l,res);
        
        return res;
    }
        
};
