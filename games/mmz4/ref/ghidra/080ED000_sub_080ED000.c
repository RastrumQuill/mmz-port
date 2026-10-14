// sub_080ED000 at 0x080ED000 (thumb)

undefined4 sub_080ED000(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((int)((uint)*(ushort *)
                     ((int)&DAT_08128c10 +
                     ((uint)*(byte *)(param_1 + 0x12) * 0x10000000 + 0x40000000 >> 0x17)) << 0x10)
       >> 0x12);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar3 = *(int *)(param_1 + 0x60) + -0x20;
  *(int *)(param_1 + 0x60) = iVar3;
  uVar4 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if (((uVar4 & 0xff) == 0xff) || ((iVar2 + -0x800 < DAT_0202cabc && (iVar3 < 0)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

