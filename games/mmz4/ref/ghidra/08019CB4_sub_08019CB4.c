// sub_08019CB4 at 0x08019CB4 (thumb)

undefined4 sub_08019CB4(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 6)) {
    uVar1 = sub_08128A24(DAT_0202dae4,6);
    sub_08001EA4(&UNK_08fa4bd0 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_08128A24(DAT_0202dae4,6);
    sub_08002208(&UNK_08fa4bdc + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

