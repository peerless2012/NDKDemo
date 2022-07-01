# Link shared library

## Makefile

### 注意事项
* 使用Makefile时，需要手动调用子目录的Makefile.

### 参考资料
* [call all-subdir-makefiles和call all-makefiles-under](https://www.jianshu.com/p/28992a35037e)

## CMake

### 注意事项
* 子目录需的编译需要调用`add_subdirectory`

### 参考资料
* [cmake：target_** 中的 PUBLIC，PRIVATE，INTERFACE](https://zhuanlan.zhihu.com/p/82244559)
* [CMake target_link_libraries Interface Dependencies](https://stackoverflow.com/questions/26037954/cmake-target-link-libraries-interface-dependencies)