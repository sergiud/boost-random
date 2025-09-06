import numpy as np


base = 61

maxeqdist_well19937a = 22
maxeqdist_well19937b = 20
maxeqdist_well21701a = 22
maxeqdist_well23209a = 20
maxeqdist_well23209b = 20
maxeqdist_well44497a = 21
maxeqdist_well800a   = 26
maxeqdist_well800b   = 24
well1024a            = 36
well1024b            = 32
well19937a           = 28
well19937b           = 27
well19937c           = 24
well21701a           = 28
well23209a           = 26
well23209b           = 24
well44497a           = 28
well44497b           = 24
well512a             = 36
well521a             = 29
well521b             = 28
well607a             = 27
well607b             = 31
well800a             = 34
well800b             = 32

percentage = np.array([
  well512a
, well521a
, well521b
, well607a
, well607b
, well800a
, well800b
, well1024a
, well1024b
, well19937a
, well19937b
, well19937c
, well21701a
, well23209a
, well23209b
, well44497a
, well44497b
, maxeqdist_well800a
, maxeqdist_well800b
, maxeqdist_well19937a
, maxeqdist_well19937b
, maxeqdist_well21701a
, maxeqdist_well23209a
, maxeqdist_well23209b
, maxeqdist_well44497a
])


np.set_printoptions(precision=0)
print((percentage * 100 / base)[..., np.newaxis])
