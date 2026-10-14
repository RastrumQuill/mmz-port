// sub_08038958 at 0x08038958 (thumb)

undefined4 sub_08038958(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((iVar2 != 0) && (*(int *)(&DAT_08335f14 + (uint)*(byte *)(iVar2 + 9) * 4) == 0)) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2a0);
  if ((iVar1 != 0) && (*(int *)(&DAT_08335f14 + (uint)*(byte *)(iVar1 + 9) * 4) == 0)) {
    iVar1 = 0;
  }
  if ((iVar2 != 0) || (iVar1 != 0)) {
    if ((iVar1 != 0) && (iVar2 == iVar1)) {
      sub_080EF11C(iVar2,param_1,*(undefined4 *)(&DAT_08335f14 + (uint)*(byte *)(iVar2 + 9) * 4));
    }
    if (iVar2 != 0) {
      sub_080EF11C(iVar2,param_1,*(undefined4 *)(&DAT_08335f14 + (uint)*(byte *)(iVar2 + 9) * 4));
    }
  }
  return in_lr;
}

