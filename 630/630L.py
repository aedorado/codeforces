s = raw_input()
r = s[0:1] + s[2:3] + s[4:5] + s[3:4] + s[1:2]
r = int(r)
r = (r ** 5)
r = str(r)
print r[-5:]