// sub_080A7EE8 at 0x080A7EE8 (thumb)

undefined4 sub_080A7EE8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  if (1 < *(byte *)(iVar6 + 0xc)) {
    uVar4 = 2;
    if (*(int *)(param_1 + 0xb8) < 0) {
      uVar4 = 3;
    }
    sub_080B919C(param_1 + 0x54,uVar4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar2 = *(byte *)(param_1 + 0xb5);
    if (bVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
    if ((*(byte *)(param_1 + 0xb6) & 0x10) == 0) {
      *(undefined *)(param_1 + 0x22) = 1;
      sub_080127E4(param_1,0x6909);
      bVar2 = *(byte *)(param_1 + 0x49);
      bVar1 = 0xc;
    }
    else {
      *(undefined *)(param_1 + 0x22) = 0;
      sub_080127E4(param_1,0x6906);
      bVar2 = *(byte *)(param_1 + 0x49) & 0xf3;
      bVar1 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar2 | bVar1;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar7 + 0x58);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 100) = 0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(iVar7 + 0xb6) & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0xb6);
    *(byte *)(param_1 + 0xb6) = bVar2 | 1;
    if (((bVar2 & 0x10) == 0) && ((*(uint *)(iVar6 + 0xb4) & 0x40) == 0)) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 100) * 0xe0;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 100) = iVar6 >> 8;
      if ((iVar6 >> 8) + 0x100U < 0x200) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  iVar5 = *(int *)(iVar7 + 0x54) - *(int *)(param_1 + 0x54);
  uVar3 = sub_080EEF7C(iVar5 * iVar5);
  iVar6 = *(int *)(param_1 + 100);
  if (iVar6 < (int)(uVar3 & 0xffff)) {
    iVar5 = sub_080EF150(iVar5 * 0x100);
    iVar6 = iVar6 * iVar5;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) - (iVar6 >> 8);
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar7 + 0x58);
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (bVar2 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar2, 3 < bVar2)) {
    uVar4 = 3;
    if ((*(byte *)(param_1 + 0xb6) & 0x10) != 0) {
      uVar4 = 2;
    }
    sub_080B919C(param_1 + 0x54,uVar4);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

