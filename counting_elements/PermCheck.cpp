#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>


int solution(std::vector<long>& A) {

    unsigned int len = A.size();
    unsigned int index = len - 1;

    std::sort(A.begin(), A.end());

    for (unsigned int i = 0; i <= index; i++) {
        if (A[i] == i + 1) {

        }
        else {
            return 0;
        }
    }

    return 1;
}




int main() {
        
    std::vector<long> v = {4,1,2};

    int op = solution(v);
    std::cout << op;
    return 0;
}
