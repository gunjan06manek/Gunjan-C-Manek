import pandas as pd
df = pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],index =['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
df=df.rename({'Ram':'Ravi',},axis='columns')
print("------------------------------------------------------")
print(df)
