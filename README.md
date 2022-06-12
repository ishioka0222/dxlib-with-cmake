# DXライブラリをCMakeと併用する例

## 注意点

DXライブラリが更新された場合には[CMakeLists.txt内のURL](https://github.com/ishioka0222/dxlib-with-cmake/blob/master/CMakeLists.txt#L9)も最新の値に更新する必要があります。

## ビルド方法

```sh
git clone git@github.com:ishioka0222/dxlib-with-cmake.git
cd dxlib-with-cmake
cmake -S . -B "build"
cmake --build "build"
```
