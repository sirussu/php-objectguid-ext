# ext-objectguid

This project provides a PHP extension for handling ObjectGuids, partially exposing the TrinityCore ObjectGuid class.
ObjectGuid class presented [here](https://github.com/TrinityCore/TrinityCore/blob/3.3.5/src/server/game/Entities/ObjectGuid.h).
In short terms TrinityCore emulator store info about object inside one single uint64, like object type, entry, id, etc.
And because php doens't have support of uint64, im create this extension for working with ObjectGuid which may by stored in your database, or somewhere else.
In additional to ObjectGuid class, you able to use HighGuid and TypeID classes which contains ObjectGuid relevated constants, these classes described in `stubs/ObjectGuid.stub.php` file.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Installation

To install this extension, you need to have PHP development environment set up. Then, you can use the `config.m4` file to configure the extension for building. Run the following commands:

```sh
phpize
./configure --enable-objectguid
make
sudo make install
```

## Usage

You can create an ObjectGuid instance from a uint64 string or from a type and counter. Here's an example:
```php
$guid = new ObjectGuid('17379391800917100580');
echo $guid->GetRawValueString().PHP_EOL;
```

*additional info in `test.php` file*

## Contributing
Contributions are welcome. Please follow the standard coding standards for PHP and C++, submit a pull request, and report any issues you find.

## License
This project is licensed under the terms of the GNU General Public License v3.0. For the full license text, please see the LICENSE file in the project root.