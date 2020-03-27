from timeit import default_timer as timer
tic = timer()
#输入角度
a = float(input('请输入角度(角度)：'))
#转化为弧度制
x = a*3.14/180
#正弦函数级数展开
y1 = x - (x**3/6)
#余弦函数
y2 = 1-x*x/2
#正切函数
y3 = x + x**3/6 + 2**5/15
#余切函数
y4 = 1/x - x/3 - x**3/45
#均保留三位小数
print("正弦值为：",'%.3f'%y1)
print("余弦值为：",'%.3f'%y2)
print("正切值为：",'%.3f'%y3)
print("余切值为：",'%.3f'%y4)

toc = timer()
print("程序运行的时间: %.3f s"%(toc - tic))# 输出的时间，秒为单位，保留三位小数