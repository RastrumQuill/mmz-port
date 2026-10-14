// sub_0801ABF8 at 0x0801ABF8 (thumb)

undefined4 sub_0801ABF8(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 0xf) && ((DAT_02001284 & 0xff) == 0)) {
    sub_08001EA4(&UNK_08fa4acc + (uint)(DAT_0202dad9 >> 2) * 0x14,0x4000);
    sub_08002208(&UNK_08fa4ad8 + (uint)(DAT_0202dad9 >> 2) * 0x14,0);
  }
  if ((DAT_02001286 >> 8 == 0xf) && (((DAT_02001286 & 0xff) == 3 || ((DAT_02001286 & 0xff) == 6))))
  {
    uVar1 = sub_08128A24((undefined)DAT_0202dadc,5);
    sub_08001EA4(&UNK_08fa4b6c + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_08128A24((undefined)DAT_0202dadc,5);
    sub_08002208(&UNK_08fa4b78 + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

