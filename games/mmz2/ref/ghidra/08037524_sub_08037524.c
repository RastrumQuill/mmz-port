// sub_08037524 at 0x08037524 (thumb)

undefined4 sub_08037524(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083347d4,param_1 + 0x54,*(undefined *)(param_1 + 0x17e));
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x801ef55;
  *(undefined **)(param_1 + 0xd8) = &DAT_08334b48;
  *(undefined **)(param_1 + 0xdc) = &DAT_08334b48;
  return in_lr;
}

