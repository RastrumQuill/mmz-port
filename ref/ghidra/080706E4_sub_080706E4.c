// sub_080706E4 at 0x080706E4 (thumb)

longlong sub_080706E4(int param_1,int param_2,int param_3)

{
  uint in_lr;
  
  param_3 = *(int *)(param_1 + 0x50) + param_3;
  *(int *)(param_1 + 0x50) = param_3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
  if (param_3 < DAT_02021648 + 0x1000) {
    *(int *)(param_1 + 0x50) = DAT_02021648 + 0x1000;
  }
  return (ulonglong)in_lr << 0x20;
}

