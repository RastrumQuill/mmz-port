// sub_08099764 at 0x08099764 (thumb)

undefined4 sub_08099764(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08366d18);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080997ce;
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = sub_08009B28(*(int *)(param_1 + 0x54) + -0xa00);
  if ((iVar1 != 0) ||
     (iVar1 = sub_08009B28(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58)),
     iVar1 != 0)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
LAB_080997ce:
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

