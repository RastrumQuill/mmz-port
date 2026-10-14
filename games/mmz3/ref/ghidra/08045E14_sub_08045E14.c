// sub_08045E14 at 0x08045E14 (thumb)

undefined4 sub_08045E14(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar3 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0x58) = iVar3;
  uVar2 = *(ushort *)(param_1 + 0xc4) & 0x1ff;
  if (uVar2 < 0x100) {
    *(int *)(param_1 + 0x54) =
         iVar1 + *(short *)((int)&DAT_080fe64c + ((uVar2 << 0x18) >> 0x17)) * 0x10;
    *(int *)(param_1 + 0x58) = iVar3 + -0x1000;
    iVar1 = iVar3 + -0x1000 +
            *(short *)((int)&DAT_080fe64c + ((uVar2 + 0x40) * 0x1000000 >> 0x17)) * 0x10;
  }
  else {
    *(int *)(param_1 + 0x54) =
         iVar1 + *(short *)((int)&DAT_080fe64c + ((uVar2 << 0x18) >> 0x17)) * 0x10;
    *(int *)(param_1 + 0x58) = iVar3 + 0x1000;
    iVar1 = iVar3 + 0x1000 +
            *(short *)((int)&DAT_080fe64c + ((uVar2 - 0xc0) * 0x1000000 >> 0x17)) * -0x10;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  return in_lr;
}

