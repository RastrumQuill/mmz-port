// sub_080D35EC at 0x080D35EC (thumb)

undefined4 sub_080D35EC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080d36ca:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080d37c4;
    sub_0801ACF8(0x10,param_1 + 0x54);
    iVar2 = 3;
    do {
      local_28 = *(int *)(param_1 + 0x54) + -0x4000;
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0x58) + (uVar3 * 0x10 >> 0x14);
      sub_080B2484(3,&local_28);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(DAT_0202f5c0 + 0x58);
    sub_08017528(param_1);
    sub_08017700(param_1,0x100);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080d37c4;
      iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + -0xa000,*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar2 + 0x101;
      DAT_0202fa12 = 0x3ce;
      DAT_0202f812 = 9;
      DAT_0202fb82 = 0x3af;
      DAT_0202f982 = 10;
      sub_0800393C(&DAT_085d790c,0x139c0);
      sub_08003E14(&DAT_085d7918,(DAT_0202f812 - 8) * 0x20 + 0x200);
      sub_0800393C(&DAT_085d876c,(DAT_0202fb82 - 0x200) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d8778,(DAT_0202f982 - 9) * 0x20 + 0x200);
      sub_08017700(param_1,0x100);
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080d36ca;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        *(undefined4 *)(DAT_0202f5c0 + 0x58) = *(undefined4 *)(param_1 + 100);
      }
      goto LAB_080d37c4;
    }
  }
  sub_080177F4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x60) = iVar2;
  iVar2 = *(int *)(param_1 + 0x68) + iVar2;
  *(int *)(param_1 + 0x68) = iVar2;
  *(char *)(param_1 + 0x24) = (char)(iVar2 >> 0xb);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (*(int *)(param_1 + 0x60) >> 2);
  iVar2 = *(int *)(param_1 + 100) - (*(int *)(param_1 + 0x60) >> 1);
  *(int *)(param_1 + 100) = iVar2;
  *(int *)(DAT_0202f5c0 + 0x58) = iVar2;
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
LAB_080d37c4:
  if (*(byte *)(param_1 + 0xd) < 3) {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 1) == 0) {
      sub_080C50F4(4,0,0,0);
    }
    sub_0801ACF8(2,param_1 + 0x54);
  }
  return in_lr;
}

