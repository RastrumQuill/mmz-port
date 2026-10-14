// sub_080DFAAC at 0x080DFAAC (thumb)

undefined4 sub_080DFAAC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x1000 < uVar2) goto LAB_080dfc82;
    *(byte *)(param_1 + 0x12) =
         (byte)((int)(uint)(byte)(&DAT_02030104)
                                 [*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2)
                                  >> 3] >>
               (*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) & 7)) & 1;
    sub_0800393C(&DAT_085d871c,(DAT_0202fb7a - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8728,(DAT_0202f97a - 4) * 0x20 + 0x200);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    uVar3 = 0xb500;
    if (*(char *)(param_1 + 0x12) != '\0') {
      uVar3 = 0xb501;
    }
    sub_08017700(param_1,uVar3);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) =
         &UNK_0836e16c +
         ((int)(uint)(byte)(&DAT_02030104)
                           [*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3]
          >> (*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) & 7) & 1U) * 8;
    *(undefined2 *)(param_1 + 0x26) = 0x2001;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_080dfc82;
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (0x1d < bVar1) {
      (&DAT_02030104)[*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] =
           (byte)(1 << (*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) & 7)) |
           (&DAT_02030104)[*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3];
    }
  }
  if ((((int)(uint)(byte)(&DAT_02030104)
                         [*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] >>
        (*(ushort *)(&DAT_0836e17c + (uint)*(byte *)(param_1 + 0x10) * 2) & 7) & 1U) != 0) &&
     (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 1;
    sub_0801ACF8(4,param_1 + 0x54);
    sub_0800471C(0x91);
    sub_08017700(param_1,0xb501);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836e174;
    *(undefined2 *)(param_1 + 0x26) = 0x2001;
  }
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x1000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined *)(param_1 + 0xd) = 0;
  }
LAB_080dfc82:
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    sub_080B2484(1,param_1 + 0x54);
    sub_0800471C(0x31);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080DFD04(param_1);
  }
  return in_lr;
}

