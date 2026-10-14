// sub_0800132C at 0x0800132C (thumb)

undefined4 sub_0800132C(void)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if ((DAT_02000ca2 & 1) == 0) {
    uVar3 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar3 & 0xffbf;
    uVar2 = DAT_04000200._0_2_;
    uVar3 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar3 & 0xff7f;
    uVar2 = DAT_04000200._0_2_;
    DAT_030015a8 = 0x8000b79;
    DAT_030015ac = 0x8000b79;
    return in_lr;
  }
  DAT_02000ca0 = DAT_02000ca1;
  DAT_02000ca8 = 0;
  if (((DAT_02000ca2 & 4) != 0) && (1 < DAT_02000ca4)) {
    DAT_02000ca2 = DAT_02000ca2 & 0xfffb;
  }
  if (DAT_02000ca5 == 0) {
    DAT_02000ca1 = DAT_02000ca5;
    DAT_02000cd8 = DAT_02000cd8 + 1;
    if (DAT_02000ca2 != 0) {
      sub_080019E0();
      DAT_0400012a = 0xfff;
    }
  }
  else {
    DAT_02000ca5 = 0;
    DAT_02000ca1 = 1;
    if ((DAT_02000ca2 & 2) == 0) {
      if ((DAT_02000ca2 & 4) != 0) {
        if (((&DAT_08312320)[DAT_02000ca4 == 0] & DAT_02000ca9) == 0) {
          DAT_02000cd8 = DAT_02000cd8 + 1;
        }
        else {
          if (DAT_02000ca4 == 0) {
            DAT_02000cc4 = DAT_02000cd2;
            DAT_02000cc6 = DAT_02000cbe & 3 | 0xc | (ushort)((DAT_02000cbe & 0xfc) << 2);
          }
          else if (DAT_02000ca4 == 1) {
            DAT_02000cc4 = DAT_02000cbc & 3 | 0xc | (ushort)((DAT_02000cbc & 0xfc) << 2);
            DAT_02000cc6 = DAT_02000cd2;
          }
          DAT_02000ca8 = 0x30;
          DAT_02000cd6 = DAT_02000cd4;
          DAT_02000cd8 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
      do {
        if ((((&DAT_08312320)[uVar5] & DAT_02000cdd) != 0) &&
           (uVar3 = (&DAT_02000d00)[uVar5] + 1, (&DAT_02000d00)[uVar5] = uVar3,
           DAT_02000d0a <= uVar3)) {
          DAT_02000cdc = DAT_02000cdc | (&DAT_08312320)[uVar5];
        }
        uVar5 = uVar5 + 1 & 0xffff;
      } while (uVar5 < 2);
      if ((DAT_02000ca2 & 4) != 0) {
        uVar5 = 0;
        do {
          (&DAT_02000cc4)[uVar5] = 0x3ff;
          DAT_02000ca8 = (&DAT_08312320)[uVar5] & DAT_02000ca1 | DAT_02000ca8;
          uVar5 = uVar5 + 1 & 0xffff;
        } while (uVar5 < 2);
      }
    }
  }
  DAT_030015a8 = 0x8000b79;
  uVar3 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar3 & 0xffbf;
  uVar2 = DAT_04000200._0_2_;
  DAT_030015ac = 0x8000b79;
  uVar3 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar3 & 0xff7f;
  uVar2 = DAT_04000200._0_2_;
  DAT_02000cdd = 0;
  DAT_02000ce1 = 0;
  DAT_02000ca9 = 0;
  DAT_02000caa = 0;
  if ((DAT_02000ca2 & 2) != 0) {
    if (DAT_02000ce0 != '\0') {
      if (((DAT_02000cdf ^ DAT_02000ca0) & 0xf0) == 0) {
        DAT_02000cdf = 0;
        DAT_02000d08 = DAT_02000d08 + 1;
        if (DAT_02000d0a < DAT_02000d08) {
          DAT_02000ce0 = '\0';
          DAT_02000d08 = 0;
          DAT_02000ce2 = 0xfff;
        }
      }
      else {
        DAT_02000cdf = DAT_02000cdf + 1;
        if (8 < (DAT_02000cdf & 0xf)) {
          DAT_02000d08 = 0;
          DAT_02000cdf = 0;
        }
      }
      if (DAT_02000ce0 != '\0') {
        if (DAT_02000d08 == 0) {
          bVar1 = *DAT_02000cfc;
          uVar5 = 0x800;
        }
        else {
          uVar5 = (DAT_02000d08 & 7) << 8;
          bVar1 = DAT_02000cfc[DAT_02000d08];
        }
        DAT_02000ce2 = sub_08001A94(bVar1 | uVar5,1);
        DAT_02000ce1 = 1;
      }
    }
    if ((DAT_02000ca2 & 4) != 0) {
      DAT_02000cce = 0xff;
      DAT_02000ccc = 0xff;
      DAT_02000cd0 = 0;
      DAT_02000cd4 = 0;
      DAT_02000cd6 = 0;
    }
    goto LAB_080016be;
  }
  if (((DAT_02000ca2 & 4) == 0) ||
     ((DAT_02000cd4 != 0 && (((DAT_02000ca8 & 0x10) == 0 || ((DAT_02000ca8 & 0x20) == 0))))))
  goto LAB_080016be;
  uVar3 = DAT_04000130;
  DAT_02000cd2 = uVar3 & 0x3ff;
  uVar5 = uVar3 & 3 | (uVar3 & 0x3f0) >> 2 | (DAT_02000cd4 & 7) << 8;
  DAT_02000ccc = sub_08001A94(uVar5,2);
  DAT_02000cce = sub_08001A94(uVar5 | 0x800,2);
  if (DAT_02000ca4 == 0) {
    uVar5 = DAT_02000cd4 + 1;
    uVar4 = 7;
LAB_080016a6:
    DAT_02000cd0 = sub_08001A94((uVar5 & uVar4) << 8,2);
  }
  else if (DAT_02000ca4 == 1) {
    uVar4 = (uint)DAT_02000cd4;
    uVar5 = 7;
    goto LAB_080016a6;
  }
  DAT_02000caa = 1;
LAB_080016be:
  uVar3 = DAT_04000128;
  if ((uVar3 & 4) == 0) {
    DAT_030015a8 = 0x8001f2d;
    uVar3 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar3 | 0x40;
    uVar2 = DAT_04000200._0_2_;
  }
  uVar3 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar3 | 0x80;
  uVar2 = DAT_04000200._0_2_;
  DAT_030015ac = 0x8001f4d;
  DAT_02000ca6 = 0;
  return in_lr;
}

