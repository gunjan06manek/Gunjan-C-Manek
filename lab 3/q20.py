import pandas as pd
df = pd.DataFrame({'Ram':[25,21,23],'Anil':[28,25,26],'Simple':[28,23,26]},index=['R1','R2','R3'])
print(df)
df=df.drop('Simple',axis=1)
print(df)
