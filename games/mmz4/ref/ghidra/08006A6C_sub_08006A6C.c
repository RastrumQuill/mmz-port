// sub_08006A6C at 0x08006A6C (thumb)

undefined4 sub_08006A6C(int param_1,int param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((int)&DAT_02000a8c + ((uint)(param_1 << 0x18) >> 0x16));
  if (*piVar1 != param_2) {
    *piVar1 = param_2;
    DAT_02000aa8 = 1;
  }
  return in_lr;
}

