# New Xaml-island (!Help wanted!)

## What I have done
1. Create 3 projects
    - Windows Application Packaging Project
    - Windows Desktop Project (or barebone C++ project)
    - Windows Runtime Component
2. Add `BlankUserControl.xaml` to the **Windows Runtime Component** project.
3. Add a reference to the **Windows Runtime Component project** in the **Windows Desktop project**.
4. Add a reference to the **Windows Desktop project** in the **Packaging project**
5. Add `CppWinRT` and `Microsoft.UI.Xaml 2.8.5 public release` to both **Windows Runtime Component project** and **Windows Desktop project**
6. Add a `app.manifest` to the **Windows Desktop project**
7. Add a `App.xaml` to the **Windows Runtime Component project**