import pandas as pd

df = pd.DataFrame({'Ram':[25,21,23],'Anil':[29,25,18],'Simple':[28,23,26]},index=['R1','R2','R3'])
print(df)
print(df.pop('Simple'))
print(df)
