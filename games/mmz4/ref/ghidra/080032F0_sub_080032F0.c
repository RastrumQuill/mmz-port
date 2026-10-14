// sub_080032F0 at 0x080032F0 (thumb)

undefined4 sub_080032F0(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (DAT_030032d0 < &DAT_030032d0) {
    uVar4 = ((*(int **)(param_1 + 8))[1] - *(int *)(param_2 + 0xc)) * 0x100 >> 0x10;
    if ((uVar4 + 0x40 < 0xe0) &&
       (uVar3 = (**(int **)(param_1 + 8) - *(int *)(param_2 + 8)) * 0x100 >> 0x10,
       uVar3 + 0x80 < 0x170)) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *DAT_030032d0 = uVar2;
      *DAT_030032d0 =
           uVar2 | uVar4 & 0xff | (uint)(*(byte *)(param_1 + 0xd) >> 6) << 0xe |
                   (uVar3 & 0x1ff) << 0x10 | (uint)*(byte *)(param_1 + 0x12) << 0x1c |
                   (uint)*(byte *)(param_1 + 0x13) << 0x1d |
                   (uint)(*(byte *)(param_1 + 0xf) >> 6) << 0x1e;
      uVar1 = *(ushort *)(param_1 + 0x10);
      *(ushort *)(DAT_030032d0 + 1) = uVar1;
      *(ushort *)(DAT_030032d0 + 1) = uVar1 | *(ushort *)(param_1 + 0x10) & 0x3ff;
      DAT_030032d0 = DAT_030032d0 + 2;
    }
  }
  return in_lr;
}

