class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = INT_MIN;
        int l =0;
        int r= n-1;
        while(l<r){
           int h = min(height[l],height[r]);
           area = max(h*(r-l),area);

          if(height[l]>height[r]){
            r--;
          }
          else l++;
        }
        return area;
        
    }
};