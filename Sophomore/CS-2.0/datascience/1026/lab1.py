import csv

f = open('1026\weather.csv')
data = csv.reader(f)
heder = next(data)
for row in data:
    print(row)
f.close()