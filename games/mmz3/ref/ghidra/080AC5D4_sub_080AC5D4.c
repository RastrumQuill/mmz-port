// sub_080AC5D4 at 0x080AC5D4 (thumb)

undefined4 sub_080AC5D4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    sub_080B2484(3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08017700(param_1,0xa00);
    }
    else {
      sub_08017700(param_1,0xa03);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080ac636;
  sub_080177F4(param_1);
LAB_080ac636:
  iVar1 = *(int *)(param_1 + 0xbc);
  if ((iVar1 == 0) || (iVar1 = iVar1 + -1, *(int *)(param_1 + 0xbc) = iVar1, iVar1 == 0)) {
    *(undefined *)(param_1 + 0x12) = 0x7f;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

