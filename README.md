_LipikaIME_, a user-configurable, phonetic, Input Method Engine for Mac OS X.

> Copyright (C) 2013 Ranganath Atreya

```
This program is free software: you can redistribute it and/or modify it under the terms of the GNU 
General Public License as published by the Free Software Foundation; either version 3 of the License, 
or (at your option) any later version.

This program comes with ABSOLUTELY NO WARRANTY; see LICENSE file.
```

### Installation ###

1. __[Download LipikaIME binary here](https://s3.amazonaws.com/sanskrit/LipikaIME.dmg)__.
2. If you have LipikaIME currently installed and running, kill it:
    * open Terminal
    * type ```killall LipikaIME``` and hit enter
3. Mount the DMG and drag-drop LipikaIME into Input Methods folder link.
4. Enable LipikaIME in ```Language & Text Preference```.


### Release Notes ###


#### 7/21/2013: RELEASE NOTES FOR VERSION 1.2 ####
* Input Schemes menu now groups schemes by language or rather script
* Added Kannada mappings: Baraha, Barahavat and ITRANS
* Added Telugu mappings: Baraha, Barahavat and ITRANS
* Preferrences greately simplified
  * Input and Output can be displayed or not
  * Input and Output can be displayed either in pop-up window or client
  * Greater font control for pop-up text
  * Ability to choose pop-up panel type


#### 3/31/2013: RELEASE NOTES FOR VERSION 1.1 ####
* Added ability to turn off candidate window
* Echo input text in the client window
* More configuration options for input and candidate text
* Added standard Baraha scheme


#### 3/09/2013: RELEASE NOTES FOR VERSION 1.0 ####
* Ability to configure log level; default is warning
* Configurable backspace behavior: delete mapping, delete ouput
* Configurable onUnfocus behavior: commit inflight, discard inflight, restore inflight onFocus
* Open sourcing the code on github


#### 3/02/2013: RELEASE NOTES FOR VERSION 0.97 ####
* ITRANS version 5.30 using classes for maintainability
* Backspace now deletes single output character at a time
* Various bug fixes including fix for #11


#### 2/25/2013: RELEASE NOTES FOR VERSION 0.95 ####
* Ability to choose from list of available schemes
* User preferences with ability to configure candidate window
* Functionality to automatically persist user preferrences
* Added ITRANS.scm for Indian languages TRANSliteration
* Various bug fixes


#### 2/17/2013: RELEASE NOTES FOR VERSION 0.90 ####
This first release is a minimal credible product with the following features:

* User configurable IME mapping in Google IME cannonical scheme format.
* Single candidate in cadidate window showing the current word being worked on.
