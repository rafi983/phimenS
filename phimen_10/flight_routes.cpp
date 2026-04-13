#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const long long INF = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;

    if (cin >> n >> m >> k) {

        vector<vector<pair<int, long long>>> adj(n + 1);

        for (int i = 0; i < m; i++) {
            int u, v;
            long long w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
        }

        vector<vector<long long>> dist(n + 1, vector<long long>(k, INF));
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

        dist[1][0] = 0;
        pq.push({0, 1});

        while (!pq.empty()) {

            pair<long long, int> curr = pq.top();
            long long d = curr.first;
            int u = curr.second;
            pq.pop();

            if (d > dist[u][k - 1]) continue;

            for (auto& edge : adj[u]) {
                int v = edge.first;
                long long w = edge.second;

                if (d + w < dist[v][k - 1]) {
                    dist[v][k - 1] = d + w;
                    sort(dist[v].begin(), dist[v].end());
                    pq.push({d + w, v});
                }
            }
        }

        for (int i = 0; i < k; i++) {
            cout << dist[n][i] << (i == k - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}
