#include <vector>
#include <iostream>
#include <algorithm>


//using namespace std;
int solution(std::vector<int>& A) {


    std::sort(A.begin(), A.end());

    size_t index = 0;
    int i = 0;
    int odd=0;
    std::vector<int>::iterator iter;

    while (i < A.size()) {
        if (A.size() == 1) {
            return A[0];
        }
        if (odd != 0) {
            return odd;
        }
        if (i+1 < A.size() && A[i] == A[i + 1]) {
            //A.erase(A.begin(), A.begin() + 2);
            i+=2;

        }
        else {
            //return A[i];
            odd = A[i];
            //i += 1;
        }
    }

    return *A.end()-1;
}

int main() {

    std::vector<int> v = {9,3,9,3,9,7,9};
    //for (int i = 0; i < 11; i++) {
    //    v.push_back(i);
    //}


    for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << '\n';
    
    int ans = solution(v);
    std::cout << ans;

    //for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    //    std::cout << *iter << " ";
    //}


    return 0;
}
