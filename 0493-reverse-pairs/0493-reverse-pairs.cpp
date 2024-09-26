class Solution {
public:
    void merge(vector<int>& arr,int l,int mid,int r)
    {
        int i1=l,i2=mid+1;
        vector<int> temp;

        while(i1<=mid&&i2<=r)
        {
            if(arr[i1]<=arr[i2])
            {
                temp.push_back(arr[i1++]);
            }
            else{
                // if((long long)arr[i1]>(long long)arr[i2]*2)
                // count+=(mid+1-i2);
            
            temp.push_back(arr[i2++]);
            }
        }
        while(i1<=mid)
        temp.push_back(arr[i1++]);
        
        while(i2<=r)
        temp.push_back(arr[i2++]);

        for(int i=l;i<=r;i++)
        {
            arr[i]=temp[i-l];
        }
        // return count;

    }
    int cp(vector<int>& arr,int l,int mid,int r)
    {
        int i1=mid+1,count=0;

        for(int i=l;i<=mid;i++)
        {
            while(i1<=r&&(long long)arr[i]>2*(long long)arr[i1]) i1++;
            count+=(i1-(mid+1));
        }
        return count;

    }
    int mergeSort(vector<int>& arr,int l,int r)
    {
        int count=0;
        if(l>=r) return count;
        int mid=l+(r-l)/2;
        count+=mergeSort(arr,l,mid);
        count+=mergeSort(arr,mid+1,r);
        count+=cp(arr,l,mid,r);
        merge(arr,l,mid,r);
        return count;
    }
    int reversePairs(vector<int>& nums) {
       return mergeSort(nums,0,nums.size()-1);
    }
};