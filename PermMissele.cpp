#include <vector>
#include <iostream>
#include <algorithm>


int solution(std::vector<int>& A) {

    if (A.empty()) {
        return 1;
    }

    std::sort(A.begin(), A.end());

    int checker = 1;
    for (std::vector<int>::iterator iter = A.begin(); iter < A.end() - 1; iter++) {

        if (*iter == checker) {
            checker++;
        }
        else {
            return checker;
        }
    }

    if (checker == *(A.end()-1)) {
        return *(A.end() - 1) + 1;
    }
    else {
        return *(A.end() - 1)-1;
    }

}
