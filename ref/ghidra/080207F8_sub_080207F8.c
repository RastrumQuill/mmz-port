// sub_080207F8 at 0x080207F8 (thumb)

undefined4 sub_080207F8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  bVar1 = sub_0801C1E8(param_1,*(undefined4 *)(param_1 + 0x108));
  *(byte *)(param_1 + 0x11c) = bVar1;
  if (bVar1 < 100) {
    iVar2 = sub_080C8AD0((uint)bVar1 << 5,100);
    iVar2 = 0x40 - iVar2;
  }
  else {
    iVar2 = 0x20;
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar2 = -iVar2;
  }
  *(int *)(param_1 + 0x60) = iVar2;
  iVar4 = iVar4 + iVar2;
  iVar2 = iVar4;
  if ((0xffe < iVar4 + 0x7ffU) && (iVar2 = -0x7ff, 0 < iVar4)) {
    iVar2 = 0x7ff;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  uVar3 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  if ((uVar3 & 0xf) != 0) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}

