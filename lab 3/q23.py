import pandas as pd
df = pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index = ['R1','R2','R3'])
print(df)
print("----------------------------------------------")
df=df.drop('Simple',axis=1)
print(df)
