// sub_08022BAC at 0x08022BAC (thumb)

undefined8 sub_08022BAC(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_1;
  if ((uint)((param_2 + -1) * 2) < (uint)(param_1 + -1 + param_2)) {
    if (param_3 <= param_2) {
      param_2 = param_3 + -1;
    }
    iVar1 = param_2;
    if (param_1 < 1) {
      iVar1 = -param_2;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

