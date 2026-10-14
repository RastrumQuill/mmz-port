// sub_08025B38 at 0x08025B38 (thumb)

undefined4 sub_08025B38(undefined4 param_1)

{
  undefined *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  do {
    puVar2 = &DAT_02002030 + uVar3;
    if ((*puVar2 != (&DAT_02002034)[uVar3]) || ((&DAT_02002038)[uVar3] != (&DAT_0200203c)[uVar3])) {
      *puVar2 = (&DAT_02002034)[uVar3];
      (&DAT_02002038)[uVar3] = (&DAT_0200203c)[uVar3];
      puVar1 = &DAT_030019c0;
      if (uVar3 != 0) {
        puVar1 = &DAT_030019e0;
      }
      FUN_080c88ec(&UNK_082a9f98 +
                   (uint)*puVar2 * 0x80 + (uint)(ushort)(&DAT_0200203c)[uVar3] * 0x20,puVar1,8);
    }
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 2);
  sub_0800DCB0(DAT_02022e90,param_1);
  return in_lr;
}

