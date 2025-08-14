import pandas as pd
df=pd.DataFrame([[25,29,28,17],[21,25,23,20],[23,18,26,23],[20,18,30,15]],index=['Maths','English','Science','Hindi'],columns=['Ram','Anil','Simple','Anuj'])
print(df)
print("----------------------------------------------------------------------")
print(df.loc['Maths':'Science',['Ram','Anil','Anuj']])
                                                                                                                                
                                                                                                                                
