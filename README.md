# monja
<div style="margin: 0 auto; max-width: 100%">
    <img src="./images/monja.jpg" alt="monja" title="MONJA GIRL"/>
</div>
Create ROS packages with ease.


## Installation

`zsh` is required to run the script. Put the script somewhere in your `$PATH`.

## Usage

Simplest usage is in the following form:

```
monja my_pkg
```

You can specify the language (either `cpp` (default) or `python`):

```
monja -l python my_pkg
```

By default, it will create the new package in the current directory. Change it
with the `-d` option:

```
monja -d ./src my_pkg
```

You can also specify dependencies:

```
monja my_pkg tf2 tf2_ros geometry_msgs
```

Have your own templates? No problem!

```
monja -t path/to/my/templates my_pkg
```

Check the following section on how to make your own template.


## Configurations

By default, `monja` will use `git config --global user.name` and
`user.email` for your name and email address. These values and some other
things can be changed with a config file located at
`$HOME/.config/monja/user.conf`. An example config file is shown below:

```
name: Foo Bar
email: foobar@example.com
# GitHub username
github: foo-bar
```


## Making your own template

To make your own template, you create the skeleton and use placeholders where
you want it replaced by `monja`. Placeholders that can be used are:

- `PKG_NAME`: replaced by the package name provided. Files and directories
  with this placeholder in the name are also replaced.
- `MY_NAME`: the user's name
- `MY_EMAIL`: the user's email
- `MY_GITHUB`: the user's GitHub account (line deleted if empty)
- `DEPENDENCIES`: dependent packages. Do not touch!


## License

MIT


## Author

Naoki Mizuno (mizuno.naoki@rm.is.tohoku.ac.jp)
