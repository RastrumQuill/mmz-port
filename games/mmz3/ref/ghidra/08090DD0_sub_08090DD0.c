// sub_08090DD0 at 0x08090DD0 (thumb)

undefined4 sub_08090DD0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  iVar5 = *(int *)(param_1 + 0x54);
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  uVar4 = uVar2 & 0x7fffffff;
  DAT_0202f608 = uVar4;
  iVar3 = sub_080FE4D8(-(uVar2 * 2 >> 0x11),0x30);
  uVar2 = uVar4 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C46F8(iVar5 + ((uVar1 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100,
               *(int *)(param_1 + 0x58) + iVar3 * -0x100,0x100,uVar2 * 2 >> 0x11 & 0x7f | 0x80);
  return in_lr;
}

