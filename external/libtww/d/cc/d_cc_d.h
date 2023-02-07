#ifndef D_CC_D_CC_D_H
#define D_CC_D_CC_D_H

#include "../../SSystem/SComponent/c_cc_d.h"

struct dCcD_SrcTri {};

struct dCcD_SrcSph {};

struct dCcD_SrcGObjTg {};

struct dCcD_SrcGObjInf {};

struct dCcD_SrcGObjAt {};

struct dCcD_SrcGAtTgCoCommonBase {};

struct dCcD_SrcCyl {};

struct dCcD_SrcCps {};

class dCcD_GStts : cCcD_GStts {
public:
    /* 0x04 */ u8 mAt;
    /* 0x05 */ u8 mTg;
    /* 0x06 */ u8 mRoomId;
    /* 0x08 */ u16 field_0x08;
    /* 0x0C */ int mAtApid;
    /* 0x10 */ int mAtOldApid;
    /* 0x14 */ int mTgApid;
    /* 0x18 */ int mTgOldApid;
    /* 0x1C */ int field_0x1C;
};  // Size = 0x20

class dCcD_Stts : cCcD_Stts {
public:
    /* 0x1C */ dCcD_GStts mGStts;
};  // Size = 0x3C

class dCcD_GAtTgCoCommonBase {
public:
    /* 0x00 */ void* mBase;  // type dCcD_SrcGAtTgCoCommonBase*
    /* 0x04 */ u32 mRPrm;
    /* 0x08 */ u32 field_0x08;
    /* 0x0C */ u32 field_0x0C;
    /* 0x10 */ fopAc_ac_c* mAc;
    /* 0x14 */ s8 mEffCounter;
    /* 0x15 */ u8 field_0x15[3];
    /* 0x18 */ void* vtable;
};  // Size = 0x1C

class dCcD_GObjAt : dCcD_GAtTgCoCommonBase {
public:
    /* 0x1C */ u8 mSe;
    /* 0x1D */ u8 mMtrl;
    /* 0x1E */ u8 mHitMark;
    /* 0x1F */ u8 mSpl;
    /* 0x20 */ cXyz mHitPos;
    /* 0x2C */ cXyz mVec;
    /* 0x38 */ cXyz mRVec;
};  // Size = 0x44

class dCcD_GObjTg : dCcD_GAtTgCoCommonBase {
public:
    /* 0x1C */ u8 mSe;
    /* 0x1D */ u8 mMtrl;
    /* 0x1E */ u8 mHitMark;
    /* 0x1F */ u8 mSpl;
    /* 0x20 */ cXyz mVec;
    /* 0x2C */ cXyz mRVec;
    /* 0x38 */ cXyz mHitPos;
    /* 0x44 */ s16* mpRotY;
};  // Size = 0x48

class dCcD_GObjCo : dCcD_GAtTgCoCommonBase {
public:
private:
};  // Size = 0x1C

class dCcD_GObjInf : cCcD_GObjInf {
public:
    /* 0x050 */ dCcD_GObjAt mGObjAt;
    /* 0x094 */ dCcD_GObjTg mGObjTg;
    /* 0x0DC */ dCcD_GObjCo mGObjCo;
};  // Size = 0xF8

class dCcD_Cyl : dCcD_GObjInf {
public:
    /* 0xF8 */ cCcD_CylAttr mCylAttr;
};  // Size = 0x130

class dCcD_Sph : dCcD_GObjInf {
public:
    /* 0x1F8 */ cCcD_SphAttr mSphAttr;
};  // Size = 0x12C

class dCcD_Cps : dCcD_GObjInf {
public:
    /* 0xF8 */ cCcD_CpsAttr mCpsAttr;
};  // Size = 0x138

class dCcD_Tri {
public:
};

#endif /* D_CC_D_CC_D_H */