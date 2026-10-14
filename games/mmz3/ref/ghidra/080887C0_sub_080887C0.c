// sub_080887C0 at 0x080887C0 (thumb)

undefined8 sub_080887C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  return CONCAT44(in_lr,(uint)(iVar1 < 0));
}

