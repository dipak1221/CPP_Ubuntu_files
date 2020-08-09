vector<int> dynamicArray(int n, vector<vector<int>> q)
{
    vector<int> res;

    vector<vector<int>> a(n);
    int lastans = 0;
    for (int i = 0; i < q.size(); i++)
    {
        int index = (lastans ^ q[i][1]) % n;
        if (q[i][0] == 1)
        {

            a[index].push_back(q[i][2]);
        }
        else
        {

            int l = a[index].size();
            if (l != 0)
                lastans = a[index][q[i][2] % l];
            else
            {
                continue;
            }

            res.push_back(lastans);
        }
    }
    return res;
}