// 34. Find First and Last Position of Element in Sorted Array

int firstOccurance(vector<int> a,int size,int key)
{
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;
    int ans=-1;
    
    while(s<=end)
    {
      if(a[mid]==key)
      {
          ans=mid;
          end=mid-1;
      }
      else
          if(a[mid]<key)
          {
              s=mid+1;
          }
          else
              if(a[mid]>key)
              {
                  end=mid-1;
              }
        mid=s+(end-s)/2;
    }
return ans;
}

int lastOccurance(vector<int> a,int size,int key)
{
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;
    int ans=-1;
    
    while(s<=end)
    {
      if(a[mid]==key)
      {
          ans=mid;
          s=mid+1;
      }
      else
          if(a[mid]<key)
          {
              s=mid+1;
          }
          else
              if(a[mid]>key)
              {
                  end=mid-1;
              }
        mid=s+(end-s)/2;
    }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        if(nums.size()==0)
            return {-1,-1};
        a.push_back(firstOccurance(nums,nums.size(),target));
        a.push_back(lastOccurance(nums,nums.size(),target));
        return a;
    }
};

