// sub_080162D0 at 0x080162D0 (thumb)

undefined4 sub_080162D0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0x380;
  if (*(int *)(param_1 + 0x54) + 0x37fU < 0x6ff) {
    if (99 < *(byte *)(param_1 + 0x11e)) {
LAB_0801636a:
      iVar3 = 0;
      goto LAB_0801636c;
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x11e);
    iVar3 = 0x200;
    if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
      iVar3 = 0x280;
    }
    if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
      iVar1 = uVar2 * 5;
      goto LAB_0801635e;
    }
    iVar1 = uVar2 << 9;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x11e);
    if (99 < uVar2) goto LAB_0801636a;
    iVar1 = uVar2 * 8 - (uint)*(byte *)(param_1 + 0x11e);
LAB_0801635e:
    iVar1 = iVar1 << 7;
  }
  iVar1 = sub_080C8AD0(iVar1,100);
  iVar3 = iVar3 - iVar1;
LAB_0801636c:
  *(int *)(param_1 + 0x54) = iVar3;
  return in_lr;
}

