#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool divisorGame(int N) {
        vector<int>lose;
        lose.push_back(1);
        for (int i = 2; i <= N; i++){
            bool flag = false;
            for (int j = 0; j < lose.size(); j++)
                if (i % (i - lose[j]) == 0) {
                    flag = true; break;
                }
            if(!flag)lose.push_back(i);
        }
        if (lose[lose.size() - 1] == N)return false;
        else return true;
    }
};

int main() {

    return 0;
}