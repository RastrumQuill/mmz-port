// sub_0803B580 at 0x0803B580 (thumb)

undefined4 sub_0803B580(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0xb4) + 0x148);
  *pcVar1 = *pcVar1 - *(char *)(param_1 + 0xc2);
  sub_080055A4();
  return in_lr;
}

