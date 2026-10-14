// sub_0809CBA0 at 0x0809CBA0 (thumb)

undefined4 sub_0809CBA0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar2 = *(int *)(iVar2 + 0x4c);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  *(int *)(param_1 + 0xbc) = iVar1 - iVar2;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b52b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b52e4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

