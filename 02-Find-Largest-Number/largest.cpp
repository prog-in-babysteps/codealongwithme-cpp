#include <iostream>
#include <vector>
#include <format>

int main() {
    using namespace std;

    int num_input;
    cout << "No. of Inputs: ";
    cin >> num_input;

    vector<int> num_list;
    for (int i = 0; i < num_input; ++i) {
        int num;
        cin >> num;
        num_list.push_back(num);
    }

    int largest_num = num_list[0];
    for (const int& num : num_list) {
        if (num > largest_num) {
            largest_num = num;
        }
    }
    cout << format("Largest Number is {}", largest_num) << endl;
    return 0;
}
