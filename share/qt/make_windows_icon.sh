#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/DogeCoinDark.ico

convert ../../src/qt/res/icons/DogeCoinDark-16.png ../../src/qt/res/icons/DogeCoinDark-32.png ../../src/qt/res/icons/DogeCoinDark-48.png ${ICON_DST}
