with open("DATA1.in", "r", encoding="utf-8") as f:
    a = set(f.read().lower().split())

with open("DATA2.in", "r", encoding="utf-8") as f:
    b = set(f.read().lower().split())

print(*sorted(a - b))
print(*sorted(b - a))