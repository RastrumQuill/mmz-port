// sub_080DD5B4 at 0x080DD5B4 (thumb)

undefined4 sub_080DD5B4(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar3 = *(byte *)(param_1 + 0xd);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 != 2) {
        return in_lr;
      }
      iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar6;
      iVar5 = *(int *)(param_1 + 0x5c) * 0xf;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xf;
      }
      *(int *)(param_1 + 0x5c) = iVar5 >> 4;
      bVar1 = true;
      iVar5 = sub_08009B28(iVar6 + *(int *)(param_1 + 100),*(int *)(param_1 + 0x58) + 0x800);
      if (iVar5 != 0) {
        bVar1 = false;
        iVar5 = *(int *)(param_1 + 100);
        if (iVar5 < 0) {
          iVar5 = sub_08009F80(*(int *)(param_1 + 0x54) + iVar5,*(int *)(param_1 + 0x58) + 0x800);
        }
        else {
          iVar5 = sub_08009E14(*(int *)(param_1 + 0x54) + iVar5,*(int *)(param_1 + 0x58) + 0x800);
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      }
      bVar3 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar3;
      if (((bVar3 & 1) != 0) && (bVar1)) {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x46);
        local_1c = *(int *)(param_1 + 0x54) + (iVar5 + -0x23) * 0x100;
        local_18 = *(int *)(param_1 + 0x58) + 0x2400;
        sub_080B2484(3,&local_1c);
      }
      if (0x80 < *(int *)(param_1 + 0x5c) + 0x40U) {
        return in_lr;
      }
      (&DAT_0203010c)[*(ushort *)(&DAT_0836de80 + (uint)*(byte *)(param_1 + 0x10) * 2)] =
           (char)((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x68)) >> 8);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar2 = 1;
      goto LAB_080dd7b0;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x2c00 < uVar4) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x9900);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836de60,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836de78;
    *(undefined2 *)(param_1 + 0x26) = 0x2001;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0x54) + 0x2a00 < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffbc0;
      *(undefined4 *)(param_1 + 100) = 0xffffd600;
      *(undefined *)(param_1 + 0x12) = 0;
      uVar2 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x54) + -0x2a00 <= *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_080dd6ac;
      *(undefined4 *)(param_1 + 0x5c) = 0x440;
      *(undefined4 *)(param_1 + 100) = 0x2a00;
      *(undefined *)(param_1 + 0x12) = 0;
      uVar2 = 2;
    }
LAB_080dd7b0:
    *(undefined *)(param_1 + 0xd) = uVar2;
    return in_lr;
  }
LAB_080dd6ac:
  uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (uVar4 < 0x2c01) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

