// sub_08034D34 at 0x08034D34 (thumb)

undefined4 sub_08034D34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(*(int *)(param_1 + 0x28) + 0x14);
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b230 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b240 + (uint)*(byte *)(param_1 + 0xd) * 4));
  iVar1 = *(int *)(param_1 + 0x68) + 0xf000;
  if (iVar1 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  return in_lr;
}

