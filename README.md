# C
《C语言程序设计教程》（第五版）清华大学出版社
## 0.1 MD语法
[MD文在线编辑](https://www.mdeditor.com/)

**Markdown是一种轻量级的「标记语言」**

[========]

## 0.2 Git
地址：https://www.cnblogs.com/ximiaomiao/p/7140456.html

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

    c、通过clone方法 将远程仓库拉回本地

        `$ git clone https://github.com/MoonShadowzzc/C_Language `
    
#### 3、向仓库中添加文件　　

　　方法一：用打开编辑器新建index.html文件

　　方法二：使用git命令。$  touch '文件名'，然后把文件通过$ git add '文件名'添加到暂存区，最后提交操作
  
#### 4、修改仓库文件

　　方法一：用编辑器打开index.html进行修改

　　方法二：使用git命令。$  vi  '文件名'，然后在中间写内容，最后提交操作

#### 5、删除仓库文件

　　方法一：在编辑器中直接把要删除的文件删除掉

　　方法二：使用git删除：$ git rm '文件名'，然后提交操作

#### 6、远程库--将远程仓库（github上对应的项目）复制到本地

    1、代码：`git clone 仓库地址`

    2、查看状态：`git status`

    3、添加缓冲区：`git add`
    
    4、提交仓库：`git commit`
    
    5、将本地仓库同步到git远程仓库中：`git push`

#### 7、忽略更新某些类型的文件
    1、首先在仓库中创建隐藏文件“.gitignore”
        a. 用git bash：
            cd 到 相应目录；touch .gitignore
        b. 用dos 命令 ren
            在相应目录先建一个t.txt文件，然后切换到cmd命令行模式里，ren t.txt .gitignore
    
    2、编辑.gitignore
        ##ignore this file##
        /target/ 
        .classpath
        .project
        .settings      

