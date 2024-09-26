class Solution {
public:

    
void swap( int *a,int *b)
{
     int temp = *a;
    *a = *b;
    *b = temp;
}

    void moveZeroes(vector<int>& nums) {
      int a=0,b=0;
     
     while(b<nums.size())
     {
        
        if(b<nums.size()&&a<nums.size())
        if(nums[b]!=0){
        swap(&nums[a],&nums[b]);
        a++;
        }
        b++;
     }

    }
};