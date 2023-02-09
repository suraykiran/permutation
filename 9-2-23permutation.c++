void fun(vector<int>s,vector<int> &nums,int n,vector<int>v,vector<vector<int>>&vs)
  {
      if(s.size()==n)
      {
          vs.push_back(s);
          return;
      }
      for(int i=0;i<n;i++)
      {
          if(v[i]==0)
          {
              s.push_back(nums[i]);
              v[i]=1;
              fun(s,nums,n,v,vs);
              v[i]=0;
              s.pop_back();
          }
      }
  }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>s;
        int n=nums.size();
        vector<int>v(n,0);
        vector<vector<int>>vs;
        fun(s,nums,n,v,vs);
        return vs;

        
    }
};
