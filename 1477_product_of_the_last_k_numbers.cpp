class ProductOfNumbers {
private:
    vector<int> nums;
public:
    ProductOfNumbers() {
        nums.push_back(1);
    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        long long prod = 1;
        int n = nums.size()-1;
        for(int i = 0; i < k; i++)
        {
            if(n-i >= 0) prod*= nums[n-i];
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */