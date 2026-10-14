// sub_08018B78 at 0x08018B78 (thumb)

undefined4 sub_08018B78(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x197);
  uVar4 = (uint)*(ushort *)(param_1 + 0x192) + (uint)(byte)(&DAT_082a81d2)[uVar3];
  if (0xffff < uVar4) {
    uVar4 = 0xffff;
  }
  *(short *)(param_1 + 0x192) = (short)uVar4;
  if (uVar3 < 2) {
    puVar2 = (ushort *)(&DAT_082a81d6 + uVar3 * 2);
    uVar1 = *puVar2;
    while (uVar1 <= uVar4) {
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
      if (1 < uVar3) break;
      uVar1 = *puVar2;
    }
  }
  if (*(byte *)(param_1 + 0x197) != uVar3) {
    *(char *)(param_1 + 0x197) = (char)uVar3;
    sub_080BC818(*(undefined2 *)(&DAT_082a81dc + uVar3 * 2),0x5a);
  }
  return in_lr;
}

