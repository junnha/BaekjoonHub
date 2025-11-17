#include <iostream>
#include <string>

int main() {
    int N;
	int arr[26];
	bool is_possible;
	std::string s1, s2;
	std::cin >> N;
 
	for (int i = 0; i < N; i++) {
		std::cin >> s1 >> s2;
		is_possible = true;

		std::fill(arr, arr + 26, 0);
		for (int j = 0; j < s1.length(); j++) {
			arr[s1[j] - 'a']++;
			arr[s2[j] - 'a']--;
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] != 0) {
				is_possible = false;
				break;
			}
		}
		if (is_possible) std::cout << "Possible\n";
		else std::cout << "Impossible\n";
	}
 
	return 0;
}