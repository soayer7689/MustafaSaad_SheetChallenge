# Third Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Sereja and Dima](https://codeforces.com/contest/381/problem/A)
2. [Stones on the Table](https://codeforces.com/contest/266/problem/A)
3. [Police Recruits](https://codeforces.com/contest/427/problem/A)
4. [Black Square](https://codeforces.com/contest/431/problem/A)
5. [Night at the Museum](https://codeforces.com/contest/731/problem/A)

<hr>

<br><br>

## 1) [Sereja and Dima](https://codeforces.com/contest/381/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    deque<int> dq; // declare deqeue
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    int i = 1, sereja = 0, dima = 0;
    while (!dq.empty())
    {
        // get the greatest value of either the leftmost card in a row, or the rightmost one
        if (dq.back() > dq.front())
        {
            if (i % 2)
                sereja += dq.back(); // sereja should play
            else
                dima += dq.back(); // deman should play
            dq.pop_back();
        }
        else
        {
            if (i % 2)
                sereja += dq.front();
            else
                dima += dq.front();
            dq.pop_front();
        }
        i++;
    }
    // output the score of the sereja and dima
    cout << sereja << " " << dima << "\n";
}
```

<hr>

<br><br>

## 2) [Stones on the Table](https://codeforces.com/contest/266/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n; // get the length of the string
    string s; // get the string
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++; // if the two neighbooring character are the same we should increase the count by 1;
    }
    cout << count << "\n"; // output the count
}
```

<hr>

<br><br>

## 3) [Police Recruits](https://codeforces.com/contest/427/problem/A)

### Code

```cpp

int main()
{
    int n;
    cin >> n; // get the length of the vector
    vector<int> grid(n);
    for (auto &i : grid) // get the vector
        cin >> i;
    int police = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (grid[i] >= 0) // if the element greater than 0 the increament value of the police by the value of the element
            police += grid[i];
        else
        {
            if (police > 0) // other wise if the police greater than zero then decrement the value of the police
            {
                police--;
            }
            else
                res++;
        }
    }
    cout << res << "\n"; // output the value of the res
}
```

<hr>

<br><br>

## 4) [Black Square](https://codeforces.com/contest/431/problem/A)

### Code

```cpp

int main()
{
    vector<int> grid;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        grid.push_back(x);
    }
    string s;
    cin >> s;
    int n = s.size(), res = 0;
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        x--;
        res += grid[x];
    }
    cout << res;
}
```

<hr>

<br><br>

## 5) [Night at the Museum](https://codeforces.com/contest/731/problem/A)

### Code

```cpp
int main()
{

    string s;
    cin >> s;
    int n = s.size(), res = 0;
    int x = s[0] - 'a', y = 26 - x;
    res += min(x, y);
    for (int i = 0; i < n - 1; i++)
    {
        x = abs(s[i] - s[i + 1]), y = 26 - x;

        res += min(x, y);
    }
    cout << res;
}
```
