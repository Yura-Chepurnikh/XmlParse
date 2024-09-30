if not exist "build" (
    mkdir build
)

cd build

cmake ..
cmake --build . --parallel 4

/Debug/app

cd D:\XmlParse\build\Debug
app.exe