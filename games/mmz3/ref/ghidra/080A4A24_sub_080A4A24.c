// sub_080A4A24 at 0x080A4A24 (thumb)

undefined4 sub_080A4A24(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = (uint)*(ushort *)(param_1 + 0xb4);
  if ((*(byte *)(iVar4 + 10) & 0x10) != 0) {
    uVar3 = -uVar3 & 0xffff;
  }
  iVar5 = *(int *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar2 = (short)(&DAT_080fe64c)[uVar3 >> 8] * -0x1800;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar5 + (iVar2 >> 8);
  if ((int)((uVar3 - 0x4000) * 0x10000) < 0) {
    uVar1 = 0x19;
  }
  else {
    uVar1 = 0x17;
  }
  *(undefined *)(param_1 + 0x25) = uVar1;
  iVar2 = *(int *)(iVar4 + 0x58);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar2 = iVar2 + *(short *)((int)&DAT_080fe64c +
                            ((uint)((*(int *)(param_1 + 0xb8) >> 8) << 0x18) >> 0x17)) * 4;
  *(int *)(param_1 + 0x58) = iVar2;
  iVar4 = *(short *)((int)&DAT_080fe64c + (((uVar3 >> 8) + 0x40) * 0x1000000 >> 0x17)) * -0x400;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar2 + (iVar4 >> 8);
  return in_lr;
}

