// sub_08046008 at 0x08046008 (thumb)

undefined4 sub_08046008(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa004);
    iVar1 = *(int *)(param_1 + 0xc0);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0xb4) = 1;
      *(int *)(param_1 + 0xc0) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

