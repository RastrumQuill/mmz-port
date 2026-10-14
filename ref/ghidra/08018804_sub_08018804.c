// sub_08018804 at 0x08018804 (thumb)

undefined4 sub_08018804(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x188) & 2) != 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x18c) +
            (uint)(byte)(&DAT_082a8164)[*(byte *)(param_2 + 0x11)];
    if (0xffff < uVar3) {
      uVar3 = 0xffff;
    }
    *(short *)(param_1 + 0x18c) = (short)uVar3;
    uVar2 = (uint)*(byte *)(param_1 + 0x194);
    if (uVar2 < 2) {
      puVar1 = (ushort *)(&DAT_082a8168 + uVar2 * 2);
      do {
        if (uVar3 < *puVar1) break;
        puVar1 = puVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 2);
    }
    if (*(byte *)(param_1 + 0x194) != uVar2) {
      *(char *)(param_1 + 0x194) = (char)uVar2;
      if ((1 < uVar2) && (199 < *(byte *)(param_1 + 0x198))) {
        uVar2 = uVar2 + 1;
      }
      sub_080BC818(*(undefined2 *)(&DAT_082a816e + uVar2 * 2),0x5a);
    }
  }
  return in_lr;
}

