# 描述：Queue 项目 makefile文件
# 版本：v1.5
# 修改记录：
# 1.为Queue项目makefile添加注释
# 2.使用变量改进我们项目的makefile
# 3.使用静态模式规则，简化makefile
# 4.使用伪目标，加上clean规则
# 5.命令回显模式，在命令前加@
# 6.make 命令加 -s 参数启用静默模式
# 7.使用wildcard函数，自动扫描当前目录下的源文件
# 8.加入自动规则依赖

# 定义可执行文件变量
executable := main
# 定义源文件列表变量
sources := $(wildcard *.cpp)
# 使用变量的引用替换，定义objects文件列表
objects := $(sources:.cpp=.o)
# 使用变量的引用替换，定义依赖描述文件列表
deps := $(sources:.cpp=.d)

# 定义编译命令变量
CXX := g++
RM := rm -rf
CFLAGS = -std=c++11

# 终极目标规则，生成complicated可执行文件
$(executable):$(objects)
# 使用自动化命令改造我们的编译命令
	@$(CXX) $^ $(CFLAGS) -o $@

#静态模式规则简化complicated makefile
$(objects): %.o:%.cpp
	@$(CXX) -o $@ -c $<

# clearn 规则
.PHONY: clean
clean:
	$(RM) $(executable) $(objects) $(deps)

# 自动规则依赖
sinclude $(deps)

$(deps):%.d:%.cpp
	$(CXX) -MM $< > $@
