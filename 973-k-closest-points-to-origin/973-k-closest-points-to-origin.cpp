class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<pair<int,pair<int,int>>> ans;
        vector<vector<int>> ans_final;
        for(int i = 0 ; i < points.size() ; ++i)
        {
            int distance = pow(points[i][0],2)+pow(points[i][1],2);
            ans.push_back({distance,{points[i][0],points[i][1]}});
            
        }
        sort(ans.begin() , ans.end());
        for(int i = 0 ; i < k ; ++i)
            ans_final.push_back({ans[i].second.first,ans[i].second.second});
        return ans_final;
            
    }
};