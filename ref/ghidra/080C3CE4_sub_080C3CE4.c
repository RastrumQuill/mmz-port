// sub_080C3CE4 at 0x080C3CE4 (thumb)

undefined4 sub_080C3CE4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc) + 0xaec;
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 0x1ffff;
  }
  if (iVar2 != (iVar1 >> 0x11) * 0x20000) {
    iVar3 = *(int *)(param_1 + 0xc) + 0x12ec;
  }
  FUN_080c88ec(&DAT_082e0894,iVar3,0x140);
  *(int *)(param_1 + 0x18) = iVar3;
  sub_080C3D58(param_1);
  sub_080C3DBC(param_1);
  sub_080C3DE8(param_1);
  sub_080C3E04(param_1);
  sub_080C3E34(param_1);
  sub_080C3E88(param_1);
  return in_lr;
}

