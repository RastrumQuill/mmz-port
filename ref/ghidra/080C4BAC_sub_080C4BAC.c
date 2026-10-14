// sub_080C4BAC at 0x080C4BAC (thumb)

undefined4 sub_080C4BAC(int param_1)

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
  FUN_080c88ec(&DAT_082e18a4,iVar3,0x140);
  *(int *)(param_1 + 0x18) = iVar3;
  sub_080B498C(*(undefined4 *)(param_1 + 0x10),0,iVar3);
  return in_lr;
}

