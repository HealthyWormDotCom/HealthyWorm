#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/HealthyWorm.png
ICON_DST=../../src/qt/res/icons/HealthyWorm.ico
convert ${ICON_SRC} -resize 16x16 HealthyWorm-16.png
convert ${ICON_SRC} -resize 32x32 HealthyWorm-32.png
convert ${ICON_SRC} -resize 48x48 HealthyWorm-48.png
convert HealthyWorm-48.png HealthyWorm-32.png HealthyWorm-16.png ${ICON_DST}

