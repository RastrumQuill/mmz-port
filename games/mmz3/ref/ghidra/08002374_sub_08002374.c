// sub_08002374 at 0x08002374 (thumb)

undefined4 sub_08002374(undefined *param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 != 0) {
    *(short *)(param_1 + 2) = (short)param_2;
    *param_1 = 4;
    FUN_08000300(param_1 + 4,param_1 + 8,DAT_02000000);
  }
  return in_lr;
}

