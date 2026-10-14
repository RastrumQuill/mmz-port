// sub_08011FB0 at 0x08011FB0 (thumb)

undefined4 sub_08011FB0(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((((DAT_0202cac0 & 0xf) == 3) && (DAT_02001286 >> 8 == 6)) && ((DAT_02001286 & 0xff) == 1)) {
    uVar1 = sub_08128A24(DAT_0202dad9,3);
    sub_08001EA4(&UNK_08fa4644 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_08128A24(DAT_0202dad9,3);
    sub_08002208(&UNK_08fa4650 + (uVar1 & 0xff) * 0x14,0);
    uVar1 = sub_08128A24(DAT_0202dad9,3);
    sub_08001EA4(&UNK_08fa46bc + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_08128A24(DAT_0202dad9,3);
    sub_08002208(&UNK_08fa46c8 + (uVar1 & 0xff) * 0x14,0);
    uVar1 = sub_08128A24((undefined)DAT_0202dada,6);
    sub_08001EA4(&UNK_08fa4734 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_08128A24((undefined)DAT_0202dada,6);
    sub_08002208(&UNK_08fa4740 + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

