/**
 * Author: Miguel Calçado
 * Date: 2026-09-30
 * License: CC0
 * Source: folklore
 * Description: Calculates shortest paths from $s$ in a graph with non-negative edge weights.
 * Unreachable nodes get dist = inf.
 * Time: O(E \log V)
 */
#pragma once

const ll inf = LLONG_MAX;

void dijkstra(int s, const vector<vector<pair<int, ll>>>& adj, vector<ll>& dist) {
	dist.assign(sz(adj), inf);
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
	
	dist[s] = 0;
	pq.push({0, s});

	while (!pq.empty()) {
		auto [d, u] = pq.top();
		pq.pop();

		if (d > dist[u]) continue;

		for (auto& [v, w] : adj[u]) {
			if (dist[u] + w < dist[v]) {
				dist[v] = dist[u] + w;
				pq.push({dist[v], v});
			}
		}
	}
}
