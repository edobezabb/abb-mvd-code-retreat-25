int add(int a, int b)
{
    return a + b;
}

struct Point
{
    int x;
    int y;

    bool operator==(Point const &other) const
    {
        return (other.x == x) && (other.y == y);
    }
};