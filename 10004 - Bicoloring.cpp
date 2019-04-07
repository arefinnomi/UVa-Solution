#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

map<int, bool> bicoloring(const map<int, vector<int>> &adjacencyList) {
	map<int, bool> nodeColor;
	map<int, int> color;
	for (auto &i: adjacencyList) {
		color.insert(make_pair(i.first, -1));
	}

	bool biColorable = true;
	queue<int> bfsQueue;
	for (auto &i : color) { // for each uncolored node
		if (!biColorable) break;
		if (i.second == -1) {
			bfsQueue.push(i.first);
			color[i.first] = 1;
			int currentNode;
			while (!bfsQueue.empty() && biColorable) { // bfs
				currentNode = bfsQueue.front();
				bfsQueue.pop();
				for (auto &child : adjacencyList.at(currentNode)) {
					if (color[child] == color[currentNode]) {
						biColorable = false;
						break;
					} else if (color[child] == -1) {
						color[child] = !color[currentNode];
						bfsQueue.push(child);
					}
				}
			}
		}
	}
//	cout << biColorable << endl;
//	for (auto &i : color) {
//		cout << i.first << ": " << i.second << endl;
//	}
	if (biColorable) {
		for (auto &node: color) nodeColor.insert(node);
	}
	return nodeColor;
}

int main() {
	while (1) {
		int node;
		cin >> node;
		if (node == 0) break;
		int edge;
		cin >> edge;
		if(edge==0){
			cout << "BICOLORABLE."<< endl;
			continue;
		} 
		map<int, vector<int>> adjacencyList;
		int node1, node2;
		for (int i = 0; i < edge; i++) {
			cin >> node1 >> node2;
			adjacencyList[node1].push_back(node2);
			adjacencyList[node2].push_back(node1);
		}
		map<int, bool> nodeColor = bicoloring(adjacencyList);
		cout << (!nodeColor.empty() ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
	}
	return 0;
}
