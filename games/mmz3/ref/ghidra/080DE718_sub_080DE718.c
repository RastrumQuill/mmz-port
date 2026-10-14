// sub_080DE718 at 0x080DE718 (thumb)

undefined4 sub_080DE718(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080177F4(param_1);
        if (*(int *)(param_1 + 100) < 0) {
          iVar4 = *(int *)(param_1 + 0x54) * 7 + *(int *)(param_1 + 0x5c);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x54) * 7 + *(int *)(param_1 + 0x5c) + 7;
        }
        if (iVar4 < 0) {
          iVar4 = iVar4 + 7;
        }
        *(int *)(param_1 + 0x54) = iVar4 >> 3;
        iVar4 = sub_08009B28(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                             *(int *)(param_1 + 0x58) + 0x1f00);
        if (iVar4 != 0) {
          if (*(int *)(param_1 + 100) < 0) {
            uVar3 = *(int *)(param_1 + 0x54) + 0x800;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x54);
          }
          *(uint *)(param_1 + 0x5c) = uVar3 & 0x7ffff000;
          *(uint *)(param_1 + 0x54) = uVar3 & 0x7ffff000;
        }
        iVar4 = *(byte *)(param_1 + 0x12) + 1;
        *(char *)(param_1 + 0x12) = (char)iVar4;
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar5 = uVar3 & 0x7fffffff;
        DAT_0202f608 = uVar5;
        iVar4 = sub_080FE4D8(uVar3 * 2 >> 0x11,((uint)(iVar4 * 0x1000000) >> 0x1b) + 1);
        if (iVar4 == 0) {
          uVar3 = uVar5 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          local_1c = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100;
          local_18 = *(int *)(param_1 + 0x58) + 0x2400;
          iVar4 = sub_08009B28();
          if (iVar4 != 0) {
            sub_080B2484(3,&local_1c);
          }
        }
        if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x54)) {
          return in_lr;
        }
        iVar4 = sub_08009B28(*(int *)(param_1 + 0x5c) + 0xfff,*(int *)(param_1 + 0x58) + 0x2100);
        if ((iVar4 == 0) &&
           (iVar4 = sub_08009B28(*(int *)(param_1 + 0x54) + -0xfff,*(int *)(param_1 + 0x58) + 0x2100
                                ), iVar4 == 0)) {
          *(undefined4 *)(param_1 + 0x60) = 0;
          uVar2 = 3;
          goto LAB_080dea02;
        }
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_080177F4(param_1);
        if (*(int *)(param_1 + 0x60) < 0x700) {
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
        }
        iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x58) = iVar4;
        iVar6 = 0;
        iVar4 = sub_08009B28(*(int *)(param_1 + 0x54) + 0xfff,iVar4 + 0x2100);
        if (iVar4 != 0) {
          iVar6 = sub_0800A104(*(int *)(param_1 + 0x54) + 0xfff,*(undefined4 *)(param_1 + 0x58));
        }
        iVar4 = sub_08009B28(*(int *)(param_1 + 0x54) + -0xfff,*(int *)(param_1 + 0x58) + 0x2100);
        if (iVar4 != 0) {
          iVar6 = sub_0800A104(*(int *)(param_1 + 0x54) + -0xfff,*(undefined4 *)(param_1 + 0x58));
        }
        if (iVar6 == 0) {
          return in_lr;
        }
        sub_0800471C(0x41);
        sub_0801ACF8(2,param_1 + 0x54);
        *(int *)(param_1 + 0x58) = iVar6 + -0x1fff;
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar2 = 1;
      goto LAB_080dea02;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x2c00 < uVar3) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x7000);
    *(undefined *)(param_1 + 0x25) = 0x1d;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836dfb4,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836dfe4;
    *(undefined2 *)(param_1 + 0x26) = 0x2001;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0) {
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 + 0x1000 < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(int *)(param_1 + 0x5c) = iVar4 + -0x2000;
      *(undefined4 *)(param_1 + 100) = 0xfffff001;
      *(undefined *)(param_1 + 0x12) = 0;
      uVar2 = 2;
    }
    else {
      if (iVar4 + -0x1000 <= *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_080de828;
      *(int *)(param_1 + 0x5c) = iVar4 + 0x2000;
      *(undefined4 *)(param_1 + 100) = 0xfff;
      *(undefined *)(param_1 + 0x12) = 0;
      uVar2 = 2;
    }
LAB_080dea02:
    *(undefined *)(param_1 + 0xd) = uVar2;
    return in_lr;
  }
LAB_080de828:
  uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (uVar3 < 0x2c01) {
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

