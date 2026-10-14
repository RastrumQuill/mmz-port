// sub_0800FEE4 at 0x0800FEE4 (thumb)

undefined4 sub_0800FEE4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (DAT_0202e01c == '\0') {
    DAT_02000f90 = DAT_02000f90 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
  }
  else {
    uVar1 = *(int *)(param_1 + 0x5c) << 0x10;
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar2 = *(uint *)(param_1 + 100);
      (&DAT_02000f94)[uVar1 >> 0x14] = (ushort)uVar2 | 0x8044;
      sub_08002824(&DAT_0837a3b8,(uVar2 & 0x1f00) << 3,0x800);
      sub_08002880(0,((ushort)(&DAT_02000f94)[uVar1 >> 0x14] & 0x1f00) * 8 + 0x800,0x800);
      DAT_02000f90 = (ushort)(*(int *)(param_1 + 0x5c) << 8) | DAT_02000f90;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar3 = *(int *)(param_1 + 0x38) + (DAT_0202e02c >> 1) + -0x538;
    if (iVar3 < -0xb4) {
      iVar3 = -0xb4;
    }
    if (0x30 < iVar3) {
      iVar3 = 0x30;
    }
    uVar1 = uVar1 >> 0x14;
    *(short *)(&DAT_02000f9c + uVar1) = (short)*(undefined4 *)(param_1 + 0x34);
    *(short *)((int)&DAT_02000f9c + uVar1 * 4 + 2) = (short)iVar3;
  }
  return in_lr;
}

