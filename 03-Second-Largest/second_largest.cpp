#include <iostream>
#include <vector>
#include <format>

int main() {
    using namespace std;

    int num_input;
    cout << "No. of Inputs: ";
    cin >> num_input;

    // Create a vector with the size of N element
    vector<int> num_list(num_input);

    // Read the input numbers and append it to the vector
    for (int i = 0; i < num_input; ++i) {
        cin >> num_list[i];
    }

    int largest_num, second_largest_num;
    // Compare first 2 numbers to get largest and second largest
    if (num_list[0] > num_list[1]) {
        largest_num = num_list[0];
        second_largest_num = num_list[1];
    } else {
        largest_num = num_list[1];
        second_largest_num = num_list[0];
    }
    for (int i = 2; i < num_list.size(); ++i) {
        // >= consume duplicate largest number if any
        if (num_list[i] => largest_num) {
            second_largest_num = largest_num;
            largest_num = num_list[i];
        } else if (num_list[i] > second_largest_num) {
            second_largest_num = num_list[i];
        }
    }
    cout << format("Largest Number is {}", largest_num) << endl;
    cout << format("Second Largest Number is {}", second_largest_num) << endl;
    return 0;
}
