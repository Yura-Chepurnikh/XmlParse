if exist "build" (
    rmdir /s /q "build"
)

mkdir build 
cd build

cmake ..
cmake --build .

/Debug/app

cd D:\XmlParse\build\Debug
app.exe