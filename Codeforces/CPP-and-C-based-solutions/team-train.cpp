#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// #chunkcode01

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// chunkcode01

void solve()
{

    int n, x;

    cin >> n >> x;

    vector<int> skills(n);

    for (int i = 0; i < n; i++)
    {

        cin >> skills[i];
    }

    // chunkcode01

    sort(skills.rbegin(), skills.rend()); // Sort in descending order

    int teams = 0;

    int members = 0;

    int min_skill = INT_MAX; // Track the minimum skill in the current team

    for (int skill : skills)
    {

        members++;

        min_skill = min(min_skill, skill); // Update the minimum skill in the current team

        if (members * min_skill >= x)
        { // Check if team meets the strength condition

            teams++;

            members = 0;

            min_skill = INT_MAX; // Reset for next team
        }

    } // chunkcode01

    cout << teams << "\n";
}

int main()
{

    FAST_IO;

    int t;

    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}