// sub_081024A8 at 0x081024A8 (thumb)

undefined4 sub_081024A8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xbe) = 0x7900;
  *(undefined2 *)(param_1 + 0xc0) = 0x7900;
  *(undefined2 *)(param_1 + 0xc2) = 0x7900;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08868648,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0xb9) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

