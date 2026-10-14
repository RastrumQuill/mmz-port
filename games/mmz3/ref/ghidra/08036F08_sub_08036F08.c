// sub_08036F08 at 0x08036F08 (thumb)

undefined4 sub_08036F08(undefined4 param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    puVar1 = &DAT_020002b8 + uVar2;
    if (*puVar1 != (&DAT_020002c0)[uVar2]) {
      *puVar1 = (&DAT_020002c0)[uVar2];
      sub_080FE110(&UNK_0835b530 + (uint)*puVar1 * 0x20,
                   &DAT_03002cc0 + (uint)(byte)(&DAT_0835b52c)[uVar2] * 0x20,8);
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 4);
  sub_0801713C(DAT_020305e0,param_1);
  return in_lr;
}

