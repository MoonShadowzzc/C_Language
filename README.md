# C
《C语言程序设计教程》（第五版）清华大学出版社
## 0.1 MD语法
[MD文在线编辑](https://www.mdeditor.com/)

**Markdown是一种轻量级的「标记语言」**

[========]

## 0.2 Git
### 下载、安装：
官方地址：https://git-scm.com/download/win 

国内下载：https://github.com/waylau/git-for-win

安装地址：c:\dev\git
### 初始化及仓库创建和操作
#### 1、Git安装之后需要进行一些基本信息设置
　　a、设置用户名：`git  config -- global  user.name`  '你再github上注册的用户名';

　　b、设置用户邮箱：`git  config -- global  user.email`  '注册时候的邮箱';

注意：该配置会在github主页上显示谁提交了该文件

 　　c、配置ok之后，我们用如下命令来看看是否配置成功

　　`git config --list`

注意：git  config --global 参数，有了这个参数表示你这台机器上所有的git仓库都会使用这个配置，当然你也可以对某个仓库指定不同的用户名和邮箱

#### 2、初始化一个新的git仓库

　　a、创建文件夹

　　　　方法一：可以鼠标右击-》点击新建文件夹C_Language

　　　　方法二：使用git新建：`$  mkdir C_Language`
    
    b、在文件内初始化git（创建git仓库）

　　　　方法一：直接输入 `$ cd C_Language`

　　　　方法一：点击C_Language文件下进去之后-》鼠标右击选择Git Bash Here->输入`$ git int`
    
#### 3、向仓库中添加文件　　

　　方法一：用打开编辑器新建index.html文件

　　方法二：使用git命令。$  touch '文件名'，然后把文件通过$ git add '文件名'添加到暂存区，最后提交操作
