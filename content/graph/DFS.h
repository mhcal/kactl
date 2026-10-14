/**
 * Author: Miguel Calçado
 * Date: 2026-09-30
 * License: CC0
 * Source: folklore
 * Description: Depth First Search. Traverses a graph and can be adapted to compute entry/exit times, connected components, or a topological sort.
 * Time: O(V + E)
 */
#pragma once

void dfs(int u, const vector<vi>& adj, vector<bool>& vis) {
	vis[u] = true;
	// Process node u here
	for (int v : adj[u]) {
		if (!vis[v]) {
			dfs(v, adj, vis);
		}
	}
}
