// sub_08074428 at 0x08074428 (thumb)

undefined4 sub_08074428(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x6d00) {
      sub_0801CF00(param_1);
    }
    *(undefined2 *)(param_1 + 200) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_0801CFF0(param_1);
  pbVar1 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*pbVar1] * 4;
  *pbVar1 = *pbVar1 + 1;
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

