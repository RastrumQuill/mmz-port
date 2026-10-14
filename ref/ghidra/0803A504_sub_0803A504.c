// sub_0803A504 at 0x0803A504 (thumb)

undefined4 sub_0803A504(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar3 = 0xd00;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar3 = -0xd00;
  }
  *(int *)(param_1 + 0x4c) = iVar1 + iVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080297C0(param_1);
  return in_lr;
}

