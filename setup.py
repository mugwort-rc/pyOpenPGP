# -*- coding: utf-8 -*-
"""
pyOpenPGP
========

|travis-ci|_

.. |travis-ci| image:: https://travis-ci.org/mugwort-rc/pyOpenPGP.svg
.. _travis-ci: https://travis-ci.org/mugwort-rc/pyOpenPGP

"""

import os, sys

from distutils.core import setup, Extension
from distutils.command import build_ext

include_dirs = ["/usr/local/include/"]
libraries = ["OpenPGP", "gmp", "gmpxx", "bz2", "z", "boost_python", "stdc++"]
library_dirs = ["/usr/local/lib/"]
sources = []
for (root, dirs, files) in os.walk("src"):
    for name in files:
        if name.endswith(".cpp"):
            sources.append("{}/{}".format(root, name))

ext = Extension(name = "OpenPGP.__OpenPGP",
                include_dirs = include_dirs,
                libraries = libraries,
                library_dirs = library_dirs,
                sources = sources,
                extra_compile_args = ["-std=c++0x"])

# ccache
for path in os.environ["PATH"].split(os.pathsep):
    path = path.strip('"')
    exe = os.path.join(path, "ccache")
    if os.path.isfile(exe) and os.access(exe, os.X_OK):
        os.environ["CC"] = "ccache gcc"
        break

setup(name = "pyOpenPGP",
      long_description = __doc__,
      version = "0.0.1",
      description = "pyOpenPGP: libOpenPGP Python wrapper.",
      author = "mugwort_rc",
      author_email = "mugwort rc at gmail com",
      url = "https://github.com/mugwort-rc/pyOpenPGP",
      classifiers = [
        "Development Status :: 3 - Alpha",
        "Intended Audience :: Developers",
        "License :: OSI Approved :: MIT License",
        "Programming Language :: C++",
        "Programming Language :: Python",
        "Programming Language :: Python :: 2.7",
      ],
      license = "MIT License",
      packages = ["OpenPGP"],
      ext_modules = [ext])
