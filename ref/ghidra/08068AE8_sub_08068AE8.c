// sub_08068AE8 at 0x08068AE8 (thumb)

undefined4 sub_08068AE8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  iVar5 = *(int *)(param_1 + 0x4c);
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  uVar4 = uVar2 & 0x7fffffff;
  DAT_02022890 = uVar4;
  iVar3 = sub_080C8CB0(-(uVar2 * 2 >> 0x11),0x30);
  uVar2 = uVar4 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  sub_080952E0(iVar5 + ((uVar1 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100,
               *(int *)(param_1 + 0x50) + iVar3 * -0x100,0x100,uVar2 * 2 >> 0x11 & 0x7f | 0x80);
  return in_lr;
}

