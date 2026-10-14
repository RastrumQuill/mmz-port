// sub_08018AD0 at 0x08018AD0 (thumb)

undefined4 sub_08018AD0(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)*(ushort *)(param_1 + 400) + (uint)(byte)(&DAT_082a819a)[*(byte *)(param_2 + 0x10)];
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  *(short *)(param_1 + 400) = (short)uVar3;
  uVar2 = (uint)*(byte *)(param_1 + 0x196);
  if (uVar2 < 4) {
    puVar1 = (ushort *)(&DAT_082a81be + uVar2 * 2);
    do {
      if (uVar3 < *puVar1) break;
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
  }
  if (*(byte *)(param_1 + 0x196) != uVar2) {
    *(char *)(param_1 + 0x196) = (char)uVar2;
    sub_080BC818(*(undefined2 *)(&DAT_082a81c8 + uVar2 * 2),0x5a);
  }
  return in_lr;
}

