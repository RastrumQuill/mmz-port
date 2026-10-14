// sub_08018990 at 0x08018990 (thumb)

undefined4 sub_08018990(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x18e) +
          (uint)(byte)(&DAT_082a8176)[*(byte *)(param_2 + 0x10)];
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  *(short *)(param_1 + 0x18e) = (short)uVar3;
  uVar2 = (uint)*(byte *)(param_1 + 0x195);
  if (uVar2 < 4) {
    puVar1 = (ushort *)(&DAT_082a8184 + uVar2 * 2);
    do {
      if (uVar3 < *puVar1) break;
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
  }
  if (*(byte *)(param_1 + 0x195) != uVar2) {
    *(char *)(param_1 + 0x195) = (char)uVar2;
    if (((3 < uVar2) && (0x3b < *(byte *)(param_1 + 0x19a))) && (99 < *(byte *)(param_1 + 0x19b))) {
      uVar2 = uVar2 + 1;
    }
    sub_080BC818(*(undefined2 *)(&DAT_082a818e + uVar2 * 2),0x5a);
  }
  return in_lr;
}

