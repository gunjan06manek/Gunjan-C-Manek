import pandas as pd
df = pd.DataFrame([{'Ram':25,'Anil':29,'Simple':23},{'Ram':25,'Anil':29,'Simple':23},{'Ram':25,'Anil':29,'Simple':23}],index=['R1','R2','R3'])
print(df)
df['Amit']=[18,22]
print(df)
