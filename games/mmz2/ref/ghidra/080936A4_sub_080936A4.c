// sub_080936A4 at 0x080936A4 (thumb)

undefined4 sub_080936A4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9000);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined4 *)(param_1 + 0xb8) = 0x4000;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xb8) - iVar1;
  *(int *)(param_1 + 0xb8) = iVar1;
  if (iVar1 < 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x10) = 1;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x30;
  sub_080128D4(param_1);
  return in_lr;
}

