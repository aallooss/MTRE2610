# -*- coding: utf-8 -*-
"""
Created on Mon Oct 26 11:04:15 2020

@author: haden
"""

import numpy as np
a = np.random.randint(10, size=(5,4))
row,col = np.where(a ==a.max())

print(a)
print('The amx value is ',a.max())
print("It occurs :", len(row), 'times')
print('The largest row number is ', row.max())
