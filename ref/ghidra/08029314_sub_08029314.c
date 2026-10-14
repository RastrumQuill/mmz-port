// sub_08029314 at 0x08029314 (thumb)

undefined8 sub_08029314(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    iVar1 = param_1 + 0xbc;
    FUN_080c88ec(param_2,iVar1,0);
    FUN_080c88f0(param_2,iVar1,0x4000007);
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xd8);
  }
  return CONCAT44(in_lr,iVar1);
}

