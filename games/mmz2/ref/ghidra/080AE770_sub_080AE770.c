// sub_080AE770 at 0x080AE770 (thumb)

undefined4 sub_080AE770(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x74);
    *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x76);
  }
  else {
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x76);
    *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x74);
  }
  *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + -0x14;
  uVar2 = *(ushort *)(param_1 + 0x76) + 0x40;
  *(ushort *)(param_1 + 0x76) = uVar2;
  if (0x2000000 < (int)((uint)uVar2 * 0x10000)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

