// sub_0806DE70 at 0x0806DE70 (thumb)

undefined4 sub_0806DE70(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(int *)(param_1 + 0xbc) == 0)) {
    iVar1 = sub_0801E11C(0,param_1,&DAT_0833ea2c);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (iVar1 != 0) {
      sub_08006E08(param_1 + 0x74,&DAT_0833e884);
    }
  }
  return in_lr;
}

