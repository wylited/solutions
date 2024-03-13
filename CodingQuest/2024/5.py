data=open("in.txt","r").read().splitlines()
data2=[]
rovers=[]
rover=False
for x in data:
    if x.startswith("Rover"):
        rover=True
    if not rover:
        data2.append(x)
    else:
        rovers.append(x.split(": ")[1].split(" -> "))
data2=data2[:-1]
bases = [a for a in data2[0].split("  ") if a != ""]
dists={}
for x in bases:
    dists[x]={}
for y in data2[1:]:
    z = y.split("  ")
    x=[int(a) for a in z[1:] if a != ""];i=0
    for a in bases:
        dists[z[0]][a]=x[i]
        dists[a][z[0]]=x[i]
        i+=1

tDist=0
for route in rovers:
    for i in range(1,len(route)):
        tDist+=dists[route[i-1]][route[i]]

print(tDist)
