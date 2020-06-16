# xd0615
Class 1:
操作Github
1.登录GitHub
2.申请自己的账户
3.创建一个项目仓库
4.使用git clone命令，将项目克隆到本地
5.在本地编译
6.使用git add将修改后的文件保存到本地仓库
7.使用git commit-m命令设置注释
8.使用git push命令将本地项目更新提交到github




三个自己掌握的知识
1.安装git 工具
git init 命令初始创建一个仓库
2.设置ssh-keygen，直接访问github
 2.1使用 ~/.ssh 命令查看一下你的电脑上有没有.ssh文件夹
 2.2如果电脑有SSH key可以跳过这一步
    $ ssh-keygen -t rsa -C "自己的邮箱"
    会显示两行：Generating public/private rsa key pair
                Enter file in which to save the key
    这是让你输入一个文件名，用于保存刚才生成的SSH key代码。为了避免麻烦，不用输入 ，就会默认生成id_rsa和id_rsa.pub两个密钥文件
    又会问你：Enter passphrase
    这是让你输入密码 方便起见就直接回车 
    后面让你再次确认密码  因为直接回车意味着没设置密码，所以直接回车
    接着会想你展示你的密钥长啥样
 2.3去你的本地仓库中把id_rsa.pub文件用记事本打开，然后复制到 网页的key中
    成功后会收到成功的邮件
3.git的基本操作
  关闭git后如何再次进去指定的仓库
  3.1 cd~  回退到用户主目录
  3.2 执行pwd命令查看当前的目录
  3.3 如果在指定的放库下要执行具体的文件 
    输入cd learngit/

Suggestions：
1.感觉超星直播有些延误和卡顿 ，腾讯课堂更好些
2.希望能学习一些操作，并了解如果课程后续结束后如果想继续学习有哪些途径和方法

