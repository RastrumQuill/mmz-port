// sub_08046B8C at 0x08046B8C (thumb)

undefined4 sub_08046B8C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833abb4);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    if (*(int *)(param_1 + 0x5c) < 0x700) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x80;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar1;
      if (iVar1 < *(int *)(param_1 + 0xc4) + 0x6c00) {
        *(undefined *)(param_1 + 0xd) = 8;
        *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar1;
      if (*(int *)(param_1 + 200) + -0x6c00 < iVar1) {
        *(undefined *)(param_1 + 0xd) = 8;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0833ab9c);
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

