## 参考资料
* [ndk-samples](https://github.com/android/ndk-samples)

### Build

#### NDK Build
* [Awesome-Android-NDK](https://github.com/JsonChao/Awesome-Android-NDK)
* [makefile 其中的函数](https://www.cnblogs.com/fly-fish/archive/2012/05/07/2489349.html)
* [call all-subdir-makefiles和call all-makefiles-under](https://www.jianshu.com/p/28992a35037e)

#### CMake
* [CMake files](https://cmake.org/files/)
* [CMake release notes](https://cmake.org/cmake/help/latest/release/index.html)
* [awesome-cmake](https://github.com/onqtam/awesome-cmake)
* [cmake-examples](https://github.com/ttroy50/cmake-examples)
* [learning-cmake](https://github.com/Akagi201/learning-cmake)
* [android-cmake](https://github.com/taka-no-me/android-cmake)
* [CMake-Cookbook](https://github.com/xiaoweiChen/CMake-Cookbook)

### [prefab](https://google.github.io/prefab/example-workflow.html)
* [C/C++ 模块现在可引用同一项目中的其他 C/C++ 模块](https://developer.android.com/studio/releases/gradle-plugin?buildsystem=ndk-build#cpp-references)
* [Android Studio fails on Gradle sync with two prefab modules which depend on each other](https://issuetracker.google.com/issues/222811915)
* [PrefabPackagingOptions](https://developer.android.com/reference/tools/gradle-api/7.1/com/android/build/api/dsl/PrefabPackagingOptions#headerOnly:kotlin.Boolean)
* [PrefabPackagingOptions headers is not good enough](https://issuetracker.google.com/issues/168994860)

##### Bug
* prefab not support ndk-build current now.
* prefab header only support one folder current now.

### NDK provider and beneficiary
* Provider, provide ndk header file and `.so`.
* Beneficiary, use other ndk header and `.so` file.