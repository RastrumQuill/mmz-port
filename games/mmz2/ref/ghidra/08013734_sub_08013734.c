// sub_08013734 at 0x08013734 (thumb)

undefined4 sub_08013734(uint param_1,byte param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  iVar3 = (param_1 & 0xff) * 4;
  puVar5 = *(ushort **)(&DAT_08321570 + iVar3);
  if (DAT_0202eba1 == 0xff) {
    sub_08002638(&DAT_08432d00,(DAT_0202e590 - 0x10) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08432d0c,(DAT_0202e390 - 0xe) * 0x20 + 0x200);
    sub_08002638(&DAT_08432d14,(DAT_0202e592 - 0x180) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08432d20,(DAT_0202e392 - 0xb) * 0x20 + 0x200);
    DAT_0202eba1 = 0xfe;
  }
  bVar2 = DAT_0202eba1;
  if ((DAT_0202eb9e & 1) == 0) {
    if (DAT_0202eba1 == 0xfe) {
      uVar1 = *puVar5;
      while (uVar1 != 0xff) {
        (&DAT_0202e590)[*puVar5] = puVar5[2];
        (&DAT_0202e390)[*puVar5] = puVar5[3];
        puVar5 = puVar5 + 4;
        uVar1 = *puVar5;
      }
    }
    puVar5 = *(ushort **)(&DAT_08321570 + iVar3);
    uVar1 = *puVar5;
    while (uVar1 != 0xff) {
      if ((((int)(uint)puVar5[1] >> (uint)param_2 & 1U) != 0) && ((puVar5[1] & 0x8000) == 0)) {
        (&DAT_0202e590)[*puVar5] = puVar5[2];
        (&DAT_0202e390)[*puVar5] = puVar5[3];
        iVar4 = (int)(short)*puVar5;
        sub_08002638(&DAT_08432d00 + iVar4 * 5,
                     ((uint)(&DAT_0202e590)[iVar4] -
                     (uint)((ushort)(&DAT_08432d06)[iVar4 * 10] >> 6)) * 0x20 + 0x10000);
        sub_08002AEC(&DAT_08432d0c + iVar4 * 0x14,
                     ((uint)(&DAT_0202e390)[iVar4] - (uint)(byte)(&DAT_08432d13)[iVar4 * 0x14]) *
                     0x20 + 0x200);
      }
      puVar5 = puVar5 + 4;
      uVar1 = *puVar5;
    }
    if (DAT_0202ebaf != '\0') {
      sub_08013978(param_1 & 0xff);
    }
    puVar5 = *(ushort **)(&DAT_08321570 + iVar3);
    uVar1 = *puVar5;
    while (bVar2 = param_2, uVar1 != 0xff) {
      if ((((int)(uint)puVar5[1] >> (uint)param_2 & 1U) != 0) && ((puVar5[1] & 0x8000) != 0)) {
        (&DAT_0202e590)[*puVar5] = puVar5[2];
        (&DAT_0202e390)[*puVar5] = puVar5[3];
        iVar3 = (int)(short)*puVar5;
        sub_08002638(&DAT_08432d00 + iVar3 * 5,
                     ((uint)(&DAT_0202e590)[iVar3] -
                     (uint)((ushort)(&DAT_08432d06)[iVar3 * 10] >> 6)) * 0x20 + 0x10000);
        sub_08002AEC(&DAT_08432d0c + iVar3 * 0x14,
                     ((uint)(&DAT_0202e390)[iVar3] - (uint)(byte)(&DAT_08432d13)[iVar3 * 0x14]) *
                     0x20 + 0x200);
      }
      puVar5 = puVar5 + 4;
      uVar1 = *puVar5;
    }
  }
  DAT_0202eba1 = bVar2;
  return in_lr;
}

