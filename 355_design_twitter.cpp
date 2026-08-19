class Twitter {
    int t;
    vector<priority_queue<pair<int,int>>> v;
    vector<set<int>>following;
public:
    Twitter()
    {
        t=0;
        v.resize(501);
        following.resize(501);
    }
    void postTweet(int userId, int tweetId)
    {
        t++;
        v[userId].push({t,tweetId});    
    }
    vector<int> getNewsFeed(int userId)
    {
        auto st=following[userId];
        auto pq=v[userId];
        for(auto f:following[userId])
        {
            auto pqq=v[f];
            while(!pqq.empty())
            {
                pq.push(pqq.top());
                pqq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty() && (int)ans.size()<10)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
    void follow(int followerId, int followeeId)
    {
        following[followerId].insert(followeeId);
    }
    void unfollow(int followerId, int followeeId)
    {
        following[followerId].erase(followeeId);    
    }
};