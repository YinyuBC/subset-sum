#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<int,int> mp;
vector<pair<int,int>> vec;
int s[] = {2,3,5,7,8};
int main(){
    vec.push_back(make_pair(0,0));
    for(auto item:s){
        for(auto pair:vec){
            cout << pair.first << " " << pair.second << endl;
            if(pair.second == item)
                continue;
            if(mp.find(pair.first+item) == mp.end())
                cout << pair.first+item << " " << item << endl;
                vec.push_back(make_pair(pair.first+item,item));
                mp[pair.first+item] = item;
        }
        cout << "xixi" << endl;
        for(auto pair:vec) {
            cout << pair.first << " " << pair.second << endl;
        }
        cout << "haha" << endl;
    }
    for(auto pair:vec) {
        cout << pair.first << " " << pair.second << endl;
    }
}
