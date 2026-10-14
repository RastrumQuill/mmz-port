// sub_080B3B94 at 0x080B3B94 (thumb)

undefined4 sub_080B3B94(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(byte *)(param_1 + 0x12) < 0x1e) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((int)((uint)*(ushort *)
                     ((int)&DAT_080fe64c +
                     ((uint)*(byte *)(param_1 + 0x12) * 0x10000000 + 0x40000000 >> 0x17)) << 0x10)
       >> 0x12);
  iVar2 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  uVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if (((uVar3 & 0xff) == 0xff) || (iVar2 + -0x800 < DAT_0202e48c)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

