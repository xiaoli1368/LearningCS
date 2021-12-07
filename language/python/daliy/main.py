# 1表示好的饼干，0表示坏的饼干，一共10个饼干
goodNumber = 0
boxes = [1, 0, 0, 0, 0, 1, 1, 1, 0, 0]
for i in range(10):
	if boxes[i] == 1:
		goodNumber += 1
print("good number is: {:d}".format(goodNumber))

# ===================
# 注释一行
"""
注释多行
注释多行
注释多行
"""

d, m, g = 0.23, 0.03, 9.8
a, b, z = 0.00098, 0.02323, 0.3633
E = d ** 3 * m * g / (4 * a ** 3 * b * z)
print(E)
