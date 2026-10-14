// sub_080CE1A0 at 0x080CE1A0 (thumb)

undefined4 sub_080CE1A0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_08002638(&DAT_084336d8,(DAT_0202e68c - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084336e4,(DAT_0202e48c - 5) * 0x20 + 0x200);
  sub_08002638(&DAT_08433638,(DAT_0202e67c - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433644,(DAT_0202e47c - 8) * 0x20 + 0x200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0x20;
  iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + 0x100;
  *(undefined *)(param_1 + 0x12) = 0x38;
  uVar2 = 0;
  do {
    *(undefined *)(param_1 + uVar2 + 0xba) = 0;
    (&DAT_0202ebb4)[(ushort)(&DAT_083498e0)[uVar2] >> 3] =
         (&DAT_0202ebb4)[(ushort)(&DAT_083498e0)[uVar2] >> 3] &
         ~(byte)(1 << ((ushort)(&DAT_083498e0)[uVar2] & 7));
    sub_080CE0F0(param_1,1,uVar2 & 0xff);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 10);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 100) = (uVar2 * 2 >> 0x11 & 0x7f) + 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CE168(param_1);
  return in_lr;
}

