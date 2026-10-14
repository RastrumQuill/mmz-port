// sub_080D34B0 at 0x080D34B0 (thumb)

undefined4 sub_080D34B0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_0801ACF8(2,param_1 + 0x54);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + -0xf000,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + 1;
    DAT_0202fa12 = 0x3ce;
    DAT_0202f812 = 9;
    sub_0800393C(&DAT_085d790c,0x139c0);
    sub_08003E14(&DAT_085d7918,(DAT_0202f812 - 8) * 0x20 + 0x200);
    sub_08017700(param_1,0x100);
    sub_0801ACF8(8,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  sub_0801ACF8(2,param_1 + 0x54);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) != 0) {
    local_1c = *(int *)(param_1 + 0x54) + -0x4000;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + (uVar3 * 0x10 >> 0x14);
    sub_080B2484(3,&local_1c);
  }
  uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x800 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

