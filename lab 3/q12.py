import pandas as pd
S1 = pd.Series([10,20,30,40])
S2 = pd.Series([11,22,33,44])
S3 = pd.Series([34,44,54])
df = pd.DataFrame([S1,S2,S3],index=['R1','R2','R3'])
print(df)
