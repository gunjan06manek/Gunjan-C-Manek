import pandas as pd
df = pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],index =['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
df=df.rename({'R1':'Maths','R2':'Science','R3':'English'},axis='index')
print("------------------------------------------------------")
print(df)
