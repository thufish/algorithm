#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;

    vector<char> res;
    char max_so_far = 0;
    for (int i = str.length() - 1; i >= 0; i--)
        if (str[i] >= max_so_far) {
            res.push_back(str[i]);
            max_so_far = max(max_so_far, str[i]);
        }

    copy(res.rbegin(), res.rend(), ostream_iterator<char>(cout));

    return 0;
}
