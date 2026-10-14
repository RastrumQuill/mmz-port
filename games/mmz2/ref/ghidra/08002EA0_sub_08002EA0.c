// sub_08002EA0 at 0x08002EA0 (thumb)

undefined8 sub_08002EA0(int param_1)

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
  if (iVar3 == 0x10) {
    uVar2 = 3;
  }
  else {
    sub_08004B9C(&DAT_02000e58 + iVar3 * 5);
    uVar2 = (uint)*(byte *)(iVar3 * 0x14 + 0x2000e5f);
  }
  return CONCAT44(in_lr,uVar2);
}

