# QWidgetsListWidget

A *gorgeous* Qt framework extension simplifying the implementation of `QListWidget`s of `QWidget`s.
Ever wanted to have a widget instead of simple text in `QListWidget`? Here you go.

## Usage

### Adding to your project

Clone to a subdirectory of your project:

```
$ cd my-project
$ git clone this-repo.git src/ThirdParty/QWidgetsListWidget
```

Note: if using git for your project already, a good idea would be to create a submodule.

Then add source, headers and include paths to your `.pro` file:

```qmake
# Add QWidgetsListWidget
include(src/ThirdParty/QWidgetsListWidget/src/QWidgetsListWidget.pri)
```

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
