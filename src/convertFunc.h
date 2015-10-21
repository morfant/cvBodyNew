//
//  convertFunc.h
//  cvBody_001
//
//  Created by giy on 9/1/13.
//
//

// ----Preprocessor command----
#pragma once

// ----Headers----
#include "ofMain.h"

// ----Define----
#define _round2(f)      (floor(f * 100.f) / 100.f)
#define _toDegree(a)	(-a / TWO_PI * 360.f) // Box2D use counter-clock wise radian
#define _toRadian(a)	(-a / 360.f * TWO_PI)

#define BOX2D_SCALE		80. // 1 meter of box2D world is 80 pixel on the screen. MUST FLOAT type!
#define _toPixelX(x)	(ofGetWidth() / 2.f + (BOX2D_SCALE * x))
#define _toPixelY(y)	(ofGetHeight() / 2.f - (BOX2D_SCALE * y))
#define _toWorldX(x)	(_round2(((ofGetWidth() / 2.f) - x) / BOX2D_SCALE) * -1.f)
#define _toWorldY(y)	(_round2(((ofGetHeight() / 2.f) - y) / BOX2D_SCALE))

#define _toWorldScale(v) (_round2(v / BOX2D_SCALE))