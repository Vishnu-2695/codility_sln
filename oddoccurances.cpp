//need #include <algorithm>

int solution(std::vector<int>& A) {

    std::sort(A.begin(), A.end());
    int i = 0;
    int odd = 0;

    while (i < A.size()) {
        if (A.size() == 1) {
            return A[0];
        }
        if (odd != 0) {
            return odd;
        }
        if (i+1 < A.size() && A[i] == A[i + 1]) {
            i+=2;

        }
        else {
            odd = A[i];
        }
    }

    return *A.end()-1;
}

