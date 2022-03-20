// weightedGraphs.cpp
#include <iostream>
#include<list>
#include <unordered_map>
#include <string>
#include <set>

using namespace std;

class Graphs {

	unordered_map< string, list< pair<string, int> > >adj;
public:

	void addEdge(string u, string v, int weight) {
		adj[u].push_back(make_pair(v, weight));
		adj[v].push_back(make_pair(u, weight));

		// adj[u].push_back({v,weight})  //pair<string,int>
		return;
	}

	void print() {
		// map<string,list>;
		for (auto i : adj) {
			cout << i.first << " ";
			for (auto j : i.second) { //  pair<string,int>
				cout << "(" << j.first << " " << j.second << ") ";
			}
			cout << endl;
		}
	}
	// dir or undir valid
	// negative weight not allowed;

	void SSSP_dijk(string src) {
		unordered_map<string, int>dist;
		for (auto i : adj) {
			dist[i.first] = INT_MAX;
		}
		set<pair<int, string> > s;
		dist[src] = 0;
		s.insert(make_pair(0, src));

		while (!s.empty()) {

			auto p = *(s.begin());  // pointer  // pair<int,string>
			s.erase(s.begin());

			for (auto i : adj[p.second]) {
				if (dist[i.first] > dist[p.second] + i.second) {


					if (s.count(make_pair(dist[i.first], i.first))) {  // {5,c}

						/// update
						//1.erase
						s.erase(make_pair(dist[i.first], i.first));  // remove {5,c};
					}
					dist[i.first] = dist[p.second] + i.second;
					s.insert(make_pair(dist[i.first], i.first));

				}
			}

		}

		for (auto i : dist) {
			cout << i.first << " " << i.second << endl;
		}

	}
};

int main() {
	Graphs g;

	g.addEdge("amritsar", "jaipur", 4);
	g.addEdge("delhi", "jaipur", 2);
	g.addEdge("delhi", "agra", 1);
	g.addEdge("amritsar", "agra", 1);
	g.addEdge("bhopal", "agra", 2);
	g.addEdge("bhopal", "mumbai", 3);
	g.addEdge("jaipur", "mumbai", 8);

	g.SSSP_dijk("amritsar");

	// g.print();

	// set<pair<int, string> >st;

	// st.insert(make_pair(1, "apple"));
	// st.insert(make_pair(1, "mango"));
	// st.insert(make_pair(1, "mango"));
	// st.insert(make_pair(1, "mango"));

	// if (st.count(make_pair(1, "mang"))) {
	// 	cout << "present" << endl;
	// }

	// for (auto i : st) {
	// 	cout << i.first << " " << i.second;
	// }

}





