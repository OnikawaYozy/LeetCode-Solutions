class Solution {
public:
    int set_bit(int n, int i, int val)
    {
        if (val) n = n | (1 << i);
        else n = n & ~(1 << i);
        return n;
    }
    int reverseBits(int n)
    {
        int index = 0;
        while (index < 16)
        {
            int front = n & (1 << index);
            int back = n & (1 << (31 - index));
            n = set_bit(n, 31-index, front);
            n = set_bit(n, index, back);
            index++;
        }
        return n;
    }
};