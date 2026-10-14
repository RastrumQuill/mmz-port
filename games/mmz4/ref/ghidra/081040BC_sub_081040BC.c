// sub_081040BC at 0x081040BC (thumb)

undefined4 sub_081040BC(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_0801CFF0(param_1);
  if (0x2000 < DAT_0202ea34 - (*(int *)(param_1 + 0x58) + 0x5000)) {
    sub_080E8F60(param_1);
  }
  return in_lr;
}

