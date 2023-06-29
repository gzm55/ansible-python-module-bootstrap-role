python_module_bootstrap (2.0.1)
===============================

Bootstrap python for ansible python modules and detect correct `ansible_python_interpreter` for python3. When
bootstraping, first try to install python2 (or python3 on alpine) using some package management, then if the remote host
is a Linux X64 with glibc, we'll try to install a exxo python for both root user and non-root users.

The detecting and bootstraping scripts to be executed by `raw` module are all compatible with `sh`(default),
`csh` and `fish` ansible shell types, but do not work with `powershell`.

Requirements
------------

- `python_module_bootstrap >= 2.0.0` requires `ansible >= 2.8`
- `python_module_bootstrap >= 1.0` requires `ansible >= 2.5`
- `python_module_bootstrap < 1.0` requires `ansible >= 2.0`

Role Variables
--------------

- `exxo_version`: default is 0.0.7
- `exxo_url`: default to `https://github.com/gzm55/ansible-python-module-bootstrap-role/releases/download/upload-exxo-bz2/exxo-<exxo_version>.tar.bz2`
- `exxo_untar_flags`: default to `j`, if the remote system can't decompress xz format, we can recompress as gzip, and update this flag

Dependencies
------------

N/A

Example Playbook
----------------

    - hosts: servers
      roles:
         - { role: gzm55.python_module_bootstrap }

License
-------

BSD
