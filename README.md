python_module_bootstrap
=======================

Bootstrap python for ansible python modules.
First try to install python using some package management, then if the remote host
is a Linux X64 with glibc, we'll try to install a exxo python.

Requirements
------------

ansible >= 2.0

Role Variables
--------------

- `exxo_version`: default is 0.0.7
- `exxo_url`: default to `https://bintray.com/artifact/download/mbachry/exxo/exxo-<exxo_version>.tar.xz`
- `exxo_untar_flags`: default to `J`, if the remote system can't decompress xz format, we can recompress as gzip, and update this flag

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
