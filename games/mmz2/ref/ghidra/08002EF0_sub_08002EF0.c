// sub_08002EF0 at 0x08002EF0 (thumb)

undefined4 sub_08002EF0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)DAT_02000e40;
  iVar1 = 0;
  while ((iVar3 = iVar1, uVar2 != param_1 * 0x1000000 + 0x1000000U >> 0x18 &&
         (iVar3 = iVar1 + 1, iVar3 < 0x10))) {
    uVar2 = (uint)(byte)(&DAT_02000e41)[iVar1];
    iVar1 = iVar3;
  }
  if (iVar3 != 0x10) {
    (&DAT_02000e40)[iVar3] = 0;
  }
  return in_lr;
}

