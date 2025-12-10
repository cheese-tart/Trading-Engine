#include <iostream>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <limits>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <unordered_map>
#include <memory>
#include <variant>
#include <memory>
#include <optional>
#include <tuple>
#include <format>

enum class OrderType {
    GoodTillCancel,
    FillAndKill
}

enum class Side {
    Buy,
    Sell
}

using Price = std::int32_t;
using Quantity = std::int32_t;
using OrderId = std::int64_t;

struct LevelInfo {
    Price price_;
    Quantity quantity_;
}

using LevelInfos_t = std::vector<LevelInfo>;

class OrderbookLevelInfos {
    public:
        OrderbookLevelInfos(LevelInfos& bids, LevelInfos& asks)
            : bids_{ bids }
            , asks_{ asks }
        {}
}

int main() {
    return 0;
}
