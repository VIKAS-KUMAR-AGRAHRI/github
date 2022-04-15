#character frequency in sentence.........
sen="this is sentence for testing frequency of character"
d={}
count=0
for i in range(len(sen)):
    if sen[i]!=" ":
        for j in range(len(sen)):
            if sen[i]==sen[j]:
                count=count+1
                
        d[sen[i]]=count
        count=0

print("character\tfrequency\n")
for key,value in d.items():
    print(key,"\t\t",value)
