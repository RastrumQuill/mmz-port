// sub_080AD30C at 0x080AD30C (thumb)

undefined4 sub_080AD30C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(byte *)(iVar5 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    uVar2 = (uint)bVar1 * 0x40 + (uint)*(byte *)(iVar5 + 0xb4);
    iVar4 = *(int *)(iVar5 + 0xb8);
    iVar3 = iVar4 * *(short *)((int)&DAT_08128c10 + (uVar2 * 0x1000000 + 0x40000000 >> 0x17));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (iVar3 >> 8);
    iVar4 = iVar4 * (short)(&DAT_08128c10)[uVar2 & 0xff];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + (iVar4 >> 8);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AD394(param_1);
  }
  return in_lr;
}

