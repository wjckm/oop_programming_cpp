#include "Small.h"
#include "BenchIncludes.h"
#include <unordered_set>

static void UnorderedMultisetEmpty(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        DoNotOptimize(test);
        test.empty();
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetEmpty)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetSize(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        DoNotOptimize(test.size());
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetSize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetMaxsize(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        DoNotOptimize(test.max_size());
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetMaxsize)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetClear(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];

    for(auto _: state)
    {
        state.PauseTiming();
        for(int i=0; i<N; i++)
        {
            a[i].data[0] = rand();
            test.insert(a[i]);
        }
        state.ResumeTiming();

        DoNotOptimize(test);

        test.clear();
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetClear)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetInsert(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a{};
    a.data[0] = rand();

    for(auto _: state)
    {
        DoNotOptimize(test);
        test.insert(a);
        ClobberMemory();
        state.PauseTiming();
        test.erase(a);
        state.ResumeTiming();
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetInsert)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetErase(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a{};
    a.data[0] = rand();

    for(auto _: state)
    {
        state.PauseTiming();
        test.insert(a);
        state.ResumeTiming();
        DoNotOptimize(test);

        test.erase(a);
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetErase)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetSwap(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    std::unordered_multiset<Small> w;
    Small a[N];
    Small b[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        b[i].data[0] = rand();
        test.insert(a[i]);
        w.insert(b[i]);
    }
    for(auto _: state)
    {
        DoNotOptimize(test);
        test.swap(w);
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetSwap)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetCount(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        DoNotOptimize(test.count(a[rand()%N]));
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetCount)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetFind(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        DoNotOptimize(test.find(a[rand()%N]));
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetFind)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetEqualrange(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        DoNotOptimize(test.equal_range(a[rand()%N]));
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetEqualrange)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetRehash(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        state.PauseTiming();
        int num = rand()%10;
        state.ResumeTiming();
        DoNotOptimize(test);
        test.rehash(num);
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetRehash)->RangeMultiplier(2)->Range(1, 1024)->Complexity();

static void UnorderedMultisetReserve(State& state)
{
    auto N = state.range(0);
    std::unordered_multiset<Small> test;
    Small a[N];
    for(int i=0; i<N; i++)
    {
        a[i].data[0] = rand();
        test.insert(a[i]);
    }
    for(auto _: state)
    {
        state.PauseTiming();
        int num = rand()%10;
        state.ResumeTiming();
        DoNotOptimize(test);
        test.reserve(num);
        ClobberMemory();
    }
    state.SetComplexityN(N);
}
BENCHMARK(UnorderedMultisetReserve)->RangeMultiplier(2)->Range(1, 1024)->Complexity();