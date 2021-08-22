int FindOutlier(std::vector<int> arr)
{
 
    std::vector<int>arr2;
    std::vector<int> odd;
    std::vector<int> even;
    arr2 = arr;
    for(int i = 0; i < arr2.size(); i++){
        if(arr2[i] % 2 == 0){
          even.push_back(arr[i]);
        } else {
          odd.push_back(arr[i]);
        }
    }
    
    if (odd.size() < even.size()) {
      return odd[0];
    } else {
      return even[0];
    }
}