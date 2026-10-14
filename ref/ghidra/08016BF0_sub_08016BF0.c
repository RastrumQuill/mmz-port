// sub_08016BF0 at 0x08016BF0 (thumb)

undefined8 sub_08016BF0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 2;
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if ((bVar1 & 0xc) != 0) {
    bVar1 = bVar1 >> 3;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if (*(byte *)(param_1 + 0x11e) < 100) {
    uVar3 = (uint)*(byte *)(param_1 + 0x11e);
    iVar4 = 0x200;
    if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
      iVar4 = 0x280;
    }
    if (((*(byte *)(param_1 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
      iVar2 = uVar3 << 9;
    }
    else {
      iVar2 = uVar3 * 0x280;
    }
    iVar2 = sub_080C8AD0(iVar2,100);
    iVar4 = iVar4 - iVar2;
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  return CONCAT44(in_lr,2);
}

