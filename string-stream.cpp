#include <iostream>
#include <vector>
#include <sstream>
class Solution{
public:
 static std::vector <int> parseInt(std::string str){
    std::stringstream ss(str);
    std::vector<int> result;
     char ch;
     int temp{};
     while (ss>>temp){
         result.push_back(temp);
         ss>>ch;
     }
     return result;
}
};
int main(){
    std::string str;
    std::cin>>str;
    std::vector<int> ints=Solution::parseInt(str);
    for (int i=0;i<ints.size();i++){
        std::cout<<ints[i]<<"\n";
    }
}