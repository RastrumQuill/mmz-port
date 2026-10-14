// sub_080E5E78 at 0x080E5E78 (thumb)

undefined4 sub_080E5E78(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080E5D14(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x1d00;
    sub_080D0894(2,&local_14);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0xf;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff1;
    }
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865a30 + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

