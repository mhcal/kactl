/**
 * Author: Miguel Calçado
 * Date: 2026-09-30
 * License: CC0
 * Source: folklore
 * Description: Breadth First Search. Computes the shortest path distances from a starting node in an unweighted graph. 
 * Unreachable nodes remain at distance -1.
 * Time: O(V + E)
 */
#pragma once

vi bfs(int start, const vector<vi>& adj) {
	vi dist(sz(adj), -1);
	queue<int> q;
	dist[start] = 0;
	q.push(start);

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int v : adj[u]) {
			if (dist[v] == -1) {
				dist[v] = dist[u] + 1;
				q.push(v);
			}
		}
	}
	return dist;
}
