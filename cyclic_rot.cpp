
std::vector<int> solution(std::vector<int> &a, int k) {

    if (!a.empty()) {
        for (int i = 0; i < k; i++) {
            std::vector<int>::iterator iter = a.end() - 1;
            int last = *iter;
            a.pop_back();
            a.insert(a.begin(), last);
        }
    }


    return a;

}
