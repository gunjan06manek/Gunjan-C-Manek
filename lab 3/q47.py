import pandas as pd
df=pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],
                index=['Math','English','Science'],
                columns=['Ram','Anil','Simple'])
print(df)
print("------------------------------------------")
print(df.loc['Math']>25)
