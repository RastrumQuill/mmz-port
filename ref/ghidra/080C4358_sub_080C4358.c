// sub_080C4358 at 0x080C4358 (thumb)

undefined4 sub_080C4358(int param_1)

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
  FUN_080c88ec(&DAT_082e109c,iVar3,0x140);
  *(int *)(param_1 + 0x14) = iVar3;
  sub_080C43B4(param_1);
  sub_080C4678(param_1);
  return in_lr;
}

