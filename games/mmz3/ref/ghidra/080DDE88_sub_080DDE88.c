// sub_080DDE88 at 0x080DDE88 (thumb)

undefined4 sub_080DDE88(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar3 = *(byte *)(param_1 + 0xd);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 != 2) {
        return in_lr;
      }
      goto LAB_080de028;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0801749C(param_1);
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      sub_08017700(param_1,(uVar2 * 2 >> 0x11 & 1) + 1 | 0x9d00);
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar3 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  if ((bVar3 & 7) == 0) {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_18 = *(int *)(param_1 + 0x58) + (uVar2 * 0x10 >> 0x14);
    if ((bVar3 & 8) == 0) {
      iVar1 = *(int *)(param_1 + 0x54) + -0x900;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + 0x900;
    }
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    local_1c = iVar1 + -0x400 + (uVar2 * 0x20 >> 0x15);
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    uVar4 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    sub_080B26A8(0x9d03,&local_1c,uVar2 * 2 >> 0x11 & 1,uVar4 * 2 >> 0x11 & 1);
    if ((8 < *(short *)(DAT_02030630 + 10)) && (iVar1 = sub_0800710C(DAT_02030630), iVar1 != 0)) {
      *(undefined *)(iVar1 + 0x25) = 0x1e;
      *(undefined *)(iVar1 + 9) = 0x2c;
      *(undefined4 *)(iVar1 + 0x14) = 0x80ddcc9;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 1;
      *(undefined *)(iVar1 + 0x11) = 1;
      *(int *)(iVar1 + 0x54) = local_1c;
      local_18 = *(int *)(param_1 + 0x58);
      *(int *)(iVar1 + 0x58) = local_18;
    }
  }
  if (*(byte *)(param_1 + 0x12) < 0x3c) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08013580(param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  sub_08017700(param_1,0x9d00);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080de028:
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
  }
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x68) = iVar1;
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0xa00 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

