# IHateUnityTime

Because I can't detect System Time Format in Unity

## How to use

1. Build the project
2. Import `UnityTimeHater.cs` into Unity
3. Import Plugins into Unity

Done!

To use, simply do

```cs
bool is24hr = UnityTimeHater.Is24HourClock();
```

## Building

1. Clone the git repo
2. Run `cmake .. -DCMAKE_BUILD_TYPE=Release`
3. Run `cmake --build . --config Release`