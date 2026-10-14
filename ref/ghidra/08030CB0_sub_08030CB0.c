// sub_08030CB0 at 0x08030CB0 (thumb)

undefined4 sub_08030CB0(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  pbVar1 = (byte *)(param_1 + 0xc9);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar1] * 4 + 0x2800
  ;
  *pbVar1 = *pbVar1 + 2;
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

