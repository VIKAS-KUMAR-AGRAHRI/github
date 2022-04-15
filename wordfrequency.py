#count the given word frequency in sentence..............
sen="""this is paragraph.
        And it is use for check frequency of any word in given sentence.
        if it is find then increase count value and if it is not find the do not increase
        the value of count."""
div=sen.split(" ")
count=0
print("GIVEN SENTENCE IS\n\n",sen)
find=input("\n\nEnter the word that you want to count in given sentence")
if find in sen:
    for i in range(len(div)):
        if find==div[i]:
            count=count+1
    print(find+"frequency in sentence is:=",count)
else:
    print(find+"is not in sentense")

        
