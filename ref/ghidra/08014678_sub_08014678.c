// sub_08014678 at 0x08014678 (thumb)

undefined4 sub_08014678(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x150);
  if (uVar1 != 0) {
    sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[uVar1 & 0xffff],(int)uVar1 >> 0x10 & 0xff,
                 uVar1 >> 0x18);
  }
  return in_lr;
}

