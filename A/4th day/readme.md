
# Fourth Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Games](https://codeforces.com/contest/268/problem/A)
2. [Buy a Shovel](https://codeforces.com/contest/732/problem/A)
3. [Colorful Stones](https://codeforces.com/contest/265/problem/A)
4. [Is your horseshoe on the other hoof](https://codeforces.com/contest/228/problem/A)
5. [Die Roll](https://codeforces.com/contest/9/problem/A)

<hr>

<br><br>

## 1) [Games](https://codeforces.com/contest/268/problem/A)

### Code

```cpp
// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt = 0; 
    cin >> n;
    vector <int> h(n),g(n) ;
    for (int i = 0 ; i<n;i++)
        cin >> h[i] >> g[i];
    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; j++) {
            if (h[i] == g[j]) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
```

<hr>

<br><br>

## 2) [Buy a Shovel](https://codeforces.com/contest/732/problem/A)

### Code

```cpp
// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r, ans = 1, total;
	cin >> k >> r;
	while (ans) {
		total = ans * k;
		if (total % 10 == 0 ||total % 10 == r)
			break;
		ans++;
	}
	cout << ans;
    return 0;
}
```

<hr>

<br><br>

## 3)  [Colorful Stones](https://codeforces.com/contest/265/problem/A)

### Code

```cpp

// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s1[cnt] == s2[i])
            ++cnt;
    }
    cout << ++cnt;
    return 0;
}
```

<hr>

<br><br>

## 4) [Is your horseshoe on the other hoof](https://codeforces.com/contest/228/problem/A)

### Code

```cpp

// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(4);
    set<int> st;
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    cout << 4 - st.size();
    return 0;
}
```

<hr>

<br><br>

## 5) [Die Roll](https://codeforces.com/contest/9/problem/A)

### Code

```cpp
// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string p[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    int ans = max(a, b);
    cout << p[6 - ans];
    return 0;
}
```
