from datetime import datetime

begin = datetime.strptime(input(), "%d.%m.%Y")
end = datetime.strptime(input(), "%d.%m.%Y")

days = (end - begin).days
months = (datetime.min + (end - begin)).month - 1
years = days // 365

if years > 0:
    print("%d year%s, " % (years, "s" if years > 1 else ""), end="")

if months > 0:
    print("%d month%s, " % (months, "s" if months > 1 else ""), end="")

print(f"total {days} days")
