class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long result = 0;
        bool large = need1 > need2;

        if (large)
        {
            result = min(
                1LL * costBoth * need1,
                1LL * costBoth * need2 + 1LL * (need1 - need2) * cost1
            );
        }
        else
        {
            result = min(
                1LL * costBoth * need2,
                1LL * costBoth * need1 + 1LL * (need2 - need1) * cost2
            );
        }

        long long normal =
            1LL * need1 * cost1 +
            1LL * need2 * cost2;

        return min(normal, result);
    }
};