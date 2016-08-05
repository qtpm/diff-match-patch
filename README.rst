diff-match-patch
=================================

Original code is here: https://code.google.com/p/google-diff-match-patch/
Original authors are Neil Fraser and Mike Slemmer.

This package is a qtpm version of diff-match-patch algorithm
and modified for Qt5.

Install
--------------

This is a `qtpm <https://github.com/qtpm/qtpm>`_ package.

.. code-block:: bash

   $ qtpm get github.com/qtpm/diff-match-patch

Headers and a library file are installed under ``vendor/include`` and ``vendor/lib`` directory.

Example
--------------

.. code-block:: cpp

   #include <iostream>
   #include <dmp/diff-match-patch.h>

   int main() {
       auto diffs = dmp.diff_main("abc", "ab123c", false);
       for (auto diff : diffs) {
           std::cout << diff.toString().c_str() << std::endl;
       }
   }

Reference
--------------

https://code.google.com/p/google-diff-match-patch/wiki/API

Develop
--------------

``qtpm`` command helps your development.

.. code-block:: bash

   $ git clone git@github.com:qtpm/diff-match-patch.git
   $ cd diff-match-patch

   # Run the following command once if this package has required packages
   # -u updates modules they are already downloaded
   $ qtpm get [-u]

   # Build and run test
   $ qtpm test

   # Try install to ``vendor`` folder
   $ qtpm build


Folder Structure and Naming Convention
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. code-block:: none

   + src/           // Header files under this folder will be published.
   + translations/  // .ts files (use `qtpm i18n` commands)
   + qtresources/   // Files that are listed in resource.qrc and linked to application.
   + examples/      // Each .cpp file is build into executable.
   + test/          // Each _test.cpp file is built into executable and launched by qtpm test.
   |                // Use `qtpm add test`` to add test case.
   |                // Other .cpp files are used as utility code. They are linked to test modules.
   + doc/           // (not working yet) QDoc setting file and extra image files and so on.
   + html/          // (not working yet) HTML output of QDoc.
   + vendor/        // External libraries (source and binary)
   + build-*/       // Work folder.
   + CMakeExtra.txt // This file is included from created CMakeLists.txt.
                    // You can add any extra build options here.

Package Author
--------------

* Yoshiki Shibukawa

License
--------------

Apache License 2.0

History
--------------

* 2016/08/05: first release
