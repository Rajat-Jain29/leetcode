class ProductOfNumbers {
public:

vector<int> products;
ProductOfNumbers() {
}

void add(int num) {
    if (num==0)
    {
        products.clear(); return;
    }
    
    if(products.size()==0)
        products.push_back(num);
    else
    { 
         products.push_back(num * products.back());
    }
}

int getProduct(int k) {
    if (products.size()==k)
        return products.back();
    else{
        if (products.size()<k)
            return 0;
        int first = *(products.end()-k-1);
        return products.back()/ first;
    }
}
};