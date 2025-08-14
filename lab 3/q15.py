import pandas as pd
import numpy as np

a1 = np.array([1,2,3,4])
a2 = np.array([10,20,30,40])
a3 = np.array([-11,-12,13,44])

df = pd.DataFrame(a1,a3)
print(df)
