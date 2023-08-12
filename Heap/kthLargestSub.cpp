// Approach 1
vector<int> store;

int sum = 0;

for (int i = 0; i < N; i++)
{
    int sum = 0;
    for (int j = i; j < N; j++)
    {
        sum += Arr[j];
        store.push_back(sum);
    }
}
sort(store.begin(), store.end());

for (int i = 0; i < store.size(); i++)
{
    cout << store[i] << " ";
}

// Approach 2