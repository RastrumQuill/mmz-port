// sub_08027648 at 0x08027648 (thumb)

undefined8 sub_08027648(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    iVar1 = param_1 + 0xbc;
    FUN_080c88ec(param_2,iVar1,0);
    FUN_080c88f0(param_2,iVar1,0x4000007);
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0x54);
  }
  return CONCAT44(in_lr,iVar1);
}

