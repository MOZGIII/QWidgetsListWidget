# QWidgetsListWidget

A *gorgeous* Qt framework extension simplifying the implementation of `QListWidget`s of `QWidget`s.
Ever wanted to have a widget instead of simple text in `QListWidget`? Here you go.

## Usage

### Adding to your project

Clone to a subdirectory of your project:

```
$ cd my-project
$ git clone https://github.com/MOZGIII/QWidgetsListWidget.git src/ThirdParty/QWidgetsListWidget
```

Note: if using git for your project already, a good idea would be to create a submodule.

Then add source, headers and include paths to your `.pro` file:

```qmake
# Add QWidgetsListWidget
include(src/ThirdParty/QWidgetsListWidget/src/QWidgetsListWidget.pri)
```

### Usage

The basic idea is the you inherit some classes and overwrite some methods.

Create a `Display` widget and make it inherit from `QWidgetsListWidgetDisplay` class.
Implement your UI in there. Overwrite `dataChanged()` method to update you widget with the model data.
Check out the examples for reference implementation.

Then create a custom `ListWidget` class with `QWidgetsListWidget` as parent.
Implement your own version of `createDisplay` method to create your `Display` class object.

That's it, basically.

### Usage example

Check out the `examples` dir for usage examples.

## Requirements

### C++11 and higher

To enable C++11 in Qt's `qmake` add `CONFIG += c++11` to your `.pro` file.

## Contributing

1. Fork it
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Added some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create new Pull Request
