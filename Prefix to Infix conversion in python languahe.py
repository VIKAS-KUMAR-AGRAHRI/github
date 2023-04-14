#first method...........................................
stack=[]
        top=-1
        infix=''
        for v in pre_exp[::-1]:
            if v.isdigit() or v.isalnum():
                stack.append(v)
                top+=1
                #print("stack",stack)
            else:
                A=stack.pop()
                B=stack.pop()
                infix='('+A+v+B+')'
                #print("infix",infix)
                stack.append(infix)
                top-=1
        #print("infix value",infix)
        return infix
#first method end here$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

#Second method start here..................
stack=[]
        for v in pre_exp[::-1]:
            if v.isalnum():
                stack.append(v)
            else:
                stack.append('('+stack.pop()+v+stack.pop()+')')
        return stack[0]
#second method end here........................................================
