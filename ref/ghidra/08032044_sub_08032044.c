// sub_08032044 at 0x08032044 (thumb)

undefined4 sub_08032044(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x11);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x240;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffdc0;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080014E8(&DAT_084e0140,(DAT_02022fa0 - 0x300) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e014c,(DAT_02022ff0 - 7) * 0x20 + 0x200);
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\f') {
    sub_0807B13C(param_1,0);
  }
  if (0x1c < *(byte *)(param_1 + 0x12)) {
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  }
  if (0 < *(int *)(param_1 + 0x58) + 0x40) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

