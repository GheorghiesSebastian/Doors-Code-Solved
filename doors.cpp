#include <stdio.h>
#include <vector>
#include <iostream> //am nevoie de cin si cout
#include <algorithm>
#include <unordered_map>

using std::cin;
using std::cout;
using std::vector;
using std::unordered_map;


int alpha = 0; // cazuri teste
int beta = 0; // user input/mesajul de la utilizator 
int openDoors = 0;

// creeat de Gheorghies Sebastian , 9 Decembrie 2023
// inceputul proiectului : 12:08


int main(void) {
	// alpha = variabila pe care o i-au pentru a afla nr de cazuri
	cout << "introduceti numarul de cazuri de teste /(adica t-ul)";
	cin >> alpha;
	for (int delta = 1; delta < alpha + 1; ++delta) {
		cout << "\n";
		cin >> beta; // numarul de cazuri de teste
		vector<int> gamma;
		for (int N = 1; N <= beta; ++N) {
			for (int M = 1; M <= beta; ++M) {
				if (M * N <= beta) {
					int F = M * N;
					gamma.push_back(F); // bag in vectorul Gammma elementele
				}
			}

		}
		unordered_map<unsigned, size_t> counts;
		for (auto v : gamma)
			++counts[v];
		for (auto const& p : counts) {
			if (p.second % 2 == 1) {
				openDoors += 1;
			}
		}
		cout << openDoors;
		openDoors = 0;
	}
	return 0;
}

// vector<int> unique;
// unique_copy(gamma.begin(), gamma.end(), std::back_inserter(unique));
// vector<pair<int, int>> frequency;
// for (int i : unique)
// frequency.emplace_back(i, count(gamma.begin(), gamma.end(), i));
// for (const auto& e : frequency) {
//	 std::cout << "Element " << e.first << " encountered " << e.second << " times\n";
//	 if (e.second % 2 == 1)
//	 	openDoors += 1;
// }
// cout << "number of open doors is : " << openDoors;

//	for (auto it = cbegin(gamma); it != cend(gamma); ) {
//	int duplicated = count(it, cend(gamma), *it);
//	if (duplicated > 1 and *it % 2 == 0)
//	openDoors += 1;
//	for (auto last = *it; *++it == last;);
//	cout << "___________5" << "\n";

// ++i (pre crementul) este superior i++-ului (post crementului) in majoritatea cazurilor , 
// imi place sa optimizez totul

// date de confirmare : apelul cu stefan , 11:55 9 Decembrie