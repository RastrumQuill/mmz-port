// sub_0805BBB8 at 0x0805BBB8 (thumb)

undefined4 sub_0805BBB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa900);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_08006E08(param_1 + 0x74,&DAT_0833cd0c);
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x5c) + 0x10;
    *(int *)(param_1 + 0x5c) = iVar1;
    if (0 < iVar1) {
      *(uint *)(param_1 + 0x5c) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c) + -0x10;
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

