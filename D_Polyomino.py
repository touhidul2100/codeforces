def I():
    inp = [input().replace(".", "0").replace("#", "1") for _ in range(4)]
    a = sum([int(inp[i][::-1], 2) << 5 * i for i in range(4)])
    b = sum([int(inp[i], 2) << 5 * (3 - i) for i in range(4)])
    c = sum([int(inp[i], 32) << i for i in range(4)])
    d = sum([int(inp[i][::-1], 32) << 3 - i for i in range(4)])
    for x in (a, b, c, d):
        x //= x & -x
        for i in range(20):
            yield x << i

A, B, C = list(I()), list(I()), list(I())
for a in A:
    for b in B:
        for c in C:
            if 0 == a & b == a & c == b & c and a | b | c == 507375:
                print("Yes")
                exit()
print("No")