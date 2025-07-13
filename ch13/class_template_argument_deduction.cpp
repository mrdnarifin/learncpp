// define our own Pair type
// template <typename T, typename U>
template <typename T=int, typename U=int>       // default T and U o type int
struct Pair
{
    T first{};
    U second{};
};

// Here 's a duction guid for our Pair (needed in C++17 only)
// Pair objects initialized with arguments of type T and U should deduce to Pair<T, U>
template <typename T, typename U>
Pair(T, U) -> Pair<T, U>;

int main()
{
    Pair<int, int> p1 { 1, 3};      // ok: we're explicitly specifying the template arguments
    Pair p2 {1, 2};                 // CTAD used to deduce Pair<int, int> from the initializers (C++17)

    Pair p3;                   // uses default Pair<int, int>

    return 0;
}
