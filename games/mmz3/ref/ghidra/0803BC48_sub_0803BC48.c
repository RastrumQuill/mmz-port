// sub_0803BC48 at 0x0803BC48 (thumb)

undefined4 sub_0803BC48(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      sub_080177F4(param_1);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (-0x700 < *(int *)(param_1 + 0x5c)) {
          iVar4 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
          goto LAB_0803bccc;
        }
      }
      else if (*(int *)(param_1 + 0x5c) < 0x700) {
        iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
LAB_0803bccc:
        *(int *)(param_1 + 0x5c) = iVar4;
      }
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar4;
      uVar2 = sub_08009A3C(iVar4,*(undefined4 *)(param_1 + 0x58));
      if (uVar2 != 0) {
        if ((uVar2 & 0x8000) != 0) {
          uVar2 = 0;
        }
        if ((uVar2 & 0xf) != 0) goto LAB_0803bd20;
      }
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
        uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
        if (uVar3 < 0x2801) {
          return in_lr;
        }
        goto LAB_0803bd40;
      }
      sub_080B322C(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_0800471C(0x2b);
    }
    else {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          if ((uVar3 * 2 >> 0x11 & 1) == 0) {
            sub_08017700(param_1,0x5204);
          }
          else {
            sub_08017700(param_1,0x5203);
          }
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0x5c) = (uVar3 * 2 >> 0x11 & 0x1ff) + 0x80;
            uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
            iVar4 = (uVar3 * 2 >> 0x11 & 0x1ff) + 0x80;
          }
          else {
            uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0x5c) = -((uVar3 * 2 >> 0x11 & 0x1ff) + 0x80);
            uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
            iVar4 = -((uVar3 * 2 >> 0x11 & 0x1ff) + 0x80);
          }
          DAT_0202f608 = uVar3 & 0x7fffffff;
          *(int *)(param_1 + 100) = iVar4;
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          *(uint *)(param_1 + 0x60) = ((uVar3 * 2 >> 0x11 & 0xf) + 8) * -0x40;
          uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
          *(uint *)(param_1 + 0x68) = ((uVar3 * 2 >> 0x11 & 0xf) + 8) * -0x40;
          uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          uVar3 = uVar3 * 2 >> 0x11 & 1;
          if (uVar3 == 0) {
            bVar1 = *(byte *)(param_1 + 10) & 0xef;
          }
          else {
            bVar1 = *(byte *)(param_1 + 10) | 0x10;
          }
          *(byte *)(param_1 + 10) = bVar1;
          *(char *)(param_1 + 0x4c) = (char)uVar3;
          pbVar6 = (byte *)(param_1 + 0x4a);
          *pbVar6 = *pbVar6 & 0xef | (byte)(uVar3 << 4);
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          uVar3 = uVar3 * 2 >> 0x11 & 1;
          if (uVar3 == 0) {
            bVar1 = *(byte *)(param_1 + 10) & 0xdf;
          }
          else {
            bVar1 = *(byte *)(param_1 + 10) | 0x20;
          }
          *(byte *)(param_1 + 10) = bVar1;
          *(char *)(param_1 + 0x4d) = (char)uVar3;
          *pbVar6 = *pbVar6 & 0xdf | (byte)(uVar3 << 5);
          *(undefined *)(param_1 + 0x12) = 0x40;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
        else if (bVar1 != 3) {
          return in_lr;
        }
        sub_080177F4(param_1);
        piVar5 = (int *)(param_1 + 0xb4);
        *piVar5 = *piVar5 + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x40;
        bVar1 = *(char *)(param_1 + 0x12) - 1;
        *(byte *)(param_1 + 0x12) = bVar1;
        if (bVar1 != 0) {
          if ((bVar1 & 1) != 0) {
            *(int *)(param_1 + 0x54) = *piVar5;
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
            return in_lr;
          }
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xbc);
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
        sub_0803BFB0(param_1);
        return in_lr;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080177F4(param_1);
      iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      if (*(char *)(param_1 + 0x71) < '\x02') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0x80;
    }
LAB_0803bd20:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
LAB_0803bd40:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
    sub_0803BFB0(param_1);
  }
  return in_lr;
}

