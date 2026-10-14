// sub_0800CB48 at 0x0800CB48 (thumb)

undefined4 sub_0800CB48(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 3)) {
    uVar1 = sub_08128A24((undefined)DAT_0202dadc,3);
    sub_08001EA4(&UNK_08fa3e24 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_08128A24((undefined)DAT_0202dadc,3);
    sub_08002208(&UNK_08fa3e30 + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

