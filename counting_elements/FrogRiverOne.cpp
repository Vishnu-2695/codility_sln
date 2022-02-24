#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>


int solution(int X,std::vector<int>& A) {

    std::vector<int> audit;
    for (int i = 1; i <= X; i++) {
        audit.push_back(i);
    }

    
    for (int i = 0; i < A.size(); i++) {
        std::vector<int>::iterator iter = std::find(audit.begin(), audit.end(), A[i]);

        if (iter != audit.end()) {
            audit.erase(iter);
        }
        if (audit.empty()) {
            return i;
        }
    }

    return -1;
}
