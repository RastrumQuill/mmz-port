// sub_08081DD0 at 0x08081DD0 (thumb)

undefined4 sub_08081DD0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    *(undefined2 *)(iVar1 + 0x8c) = 0x14;
  }
  sub_08081CAC(param_2,*(byte *)(iVar1 + 10) >> 4 & 1);
  return in_lr;
}

