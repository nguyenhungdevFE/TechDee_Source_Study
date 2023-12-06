#include <bits/stdc++.h>

using namespace std;

void enter(int &n, int &W, vector < pair < int, int > > items)
{
    cin >> n >> W;

    items.resize(n + 1);

    // Sử dụng kiểu pair để nhập dữ liệu các món đồ.
    // items[i].first và items[i].second lần lượt là trọng lượng và giá trị của đồ vật thứ i.
    for (int i = 1; i <= n; ++i)
        cin >> items[i].first >> items[i].second;
}

// Truy vết các món đồ được chọn.
void trace_back(int n, int W, vector < vector < int > > &dp, vector < pair < int, int > > &items)
{
    vector < int > picked_items;
    while (n > 0)
    {
        if (dp[n][W] == dp[n - 1][W])
            --n;
        else 
        {
            picked_items.push_back(n);
            W -= items[n].second;
            --n;
        }
    }

    for (int i = picked_items.size() - 1; i >= 0; --i)
        cout << picked_items[i] << ' ';
}

// Quy hoạch động.
void solution(int n, int W, vector < pair < int, int > > &items)
{
    vector < vector < int > > dp(n + 1, vector < int >(W + 1, 0));

    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= W; ++j)
        {
            dp[i][j] = dp[i - 1][j];

            if (j >= items[i].first)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - items[i].first] + items[i].second);
        }

    // In kết quả.
    cout << dp[n][W] << endl;
    trace_back(n, W, dp, items);
}

int main()
{
    int n, W;
    vector < pair < int, int > > items;

    enter(n, W, items);
    solution(n, W, items);
}
