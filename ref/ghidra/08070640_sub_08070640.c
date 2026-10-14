// sub_08070640 at 0x08070640 (thumb)

undefined8 sub_08070640(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
  return CONCAT44(in_lr,(uint)(iVar1 < 0));
}

