// sub_08035D04 at 0x08035D04 (thumb)

undefined8 sub_08035D04(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)*(char *)(*(int *)(&DAT_08335d04 + param_1 * 4) +
                          (param_2 - (uint)(byte)(&DAT_08335cd8)[param_1 * 2]));
  }
  return CONCAT44(in_lr,iVar1);
}

