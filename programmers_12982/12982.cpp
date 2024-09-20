#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>  // sort

using namespace std;

int solution(vector<int> d, int budget) {
    int n = 0;

    // 오름차순으로 정렬
    sort(d.begin(), d.end());

    // 작은 예산부터 부서 지원
    for (int i = 0; i < d.size(); i++)
    {
        if (budget < d[i])
            break;

        budget -= d[i];
        n++;  // 지원한 부서 수 ++
    }

    return n;
}


/*
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int n = 0, tmp;
    int d_len = sizeof(d) / sizeof(d[0]);

    for (int i = 0; i < d_len - 1; i++)
    {
        for (int j = i + 1; j < d_len; j++)
        {
            if (d[i] > d[j])
            {
                tmp = d[i];
                d[i] = d[j];
                d[j] = tmp;
            }
        }
    }

    for (int i = 0; i < d_len; i++)
    {
        if (budget < d[i])
            break;

        budget = budget - d[i];
        n++;
    }

    return n;
}
*/