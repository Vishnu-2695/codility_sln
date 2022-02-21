#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>


int solution(std::vector<int>& A) {

    int min = 10000;

    int vsum = 0;
    for (int i = 0; i < A.size(); i++) {
        vsum += A[i];
    }

    int sum1 = 0;
    for (int p = 1; p < A.size(); p++) {
        //int sum1 = 0;
        //for (int m = 0; m < p; m++) {
        //    sum1 += A[m];
        //}

        sum1 += A[p - 1];

        int sum2 = vsum-sum1;
        //for (int n = p; n < A.size(); n++) {
        //    sum2 += A[n];
        //}

        int diff = std::abs(sum1 - sum2);

        if (diff < min) {
            min = diff;
        }
    }

    return min;

}




int main() {

    std::vector<int> v = {3,1,2,4,3};
    
    int min = solution(v);

    std::cout << min;

    return 0;
}
