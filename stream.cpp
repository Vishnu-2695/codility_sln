#include <sstream>
#include <vector>
#include <iostream>
#include <iterator>
#include <list>
#include <deque>

std::vector<int> solution(std::vector<int> &a, int k) {          //&a

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

//using namespace std;
int main() {
    
    std::vector<int> v;
    for (int i = 0; i < 11; i++) {
        v.push_back(i);
    }

    for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << '\n';

    solution(v, 3);

    for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        std::cout << *iter << " ";
    }


    return 0;
}
