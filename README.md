# IHateUnityTime

Because I can't detect System Time Format in Unity

## Support

| OS      | Supported |
|---------|-----------|
| Windows | ✔️         |
| Linux   | ✔️         |
| macOS   | ❌         |
| Android | ❌         |

✔️ - Supported

⚠️ - Untested

❌ - Unsupported

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
2. Create a build Directory and cd into it
   + `cmake-build-debug`, `cmake-build-release-windows`, `cmake-build-release-linux`, etc.
4. Run `cmake .. -DCMAKE_BUILD_TYPE=Release`
5. Run `cmake --build . --config Release`
