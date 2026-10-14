// sub_0800A6F0 at 0x0800A6F0 (thumb)

undefined4 sub_0800A6F0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((((DAT_02001284 >> 8 == 1) && ((DAT_02001284 & 0xff) == 0)) && (DAT_02001286 >> 8 == 1)) &&
     (((DAT_02001286 & 0xff) == 1 && (DAT_0202dad4 != '\x02')))) {
    sub_08001EA4(&UNK_08fa3ce4 + (uint)(byte)(&DAT_0882a5e8)[(byte)DAT_0202dadc >> 1] * 0x14,0x4000)
    ;
    sub_08002208(&UNK_08fa3cf0 + (uint)(byte)(&DAT_0882a5e8)[(byte)DAT_0202dadc >> 1] * 0x14,0);
    sub_08001EA4(&UNK_08fa3d20 + (uint)(byte)(&DAT_0882a5e8)[(byte)DAT_0202dadc >> 1] * 0x14,0x4000)
    ;
    sub_08002208(&UNK_08fa3d2c + (uint)(byte)(&DAT_0882a5e8)[(byte)DAT_0202dadc >> 1] * 0x14,0);
  }
  if (((DAT_02001284 >> 8 == 1) && ((DAT_02001284 & 0xff) == 3)) &&
     ((DAT_02001286 >> 8 == 1 && ((DAT_02001286 & 0xff) == 2)))) {
    if (DAT_0202dadc._3_1_ < 0x14) {
      uVar1 = sub_08128A24(DAT_0202dadc._3_1_,5);
      sub_08001EA4(&UNK_08fa3d5c + (uVar1 & 0xff) * 0x14,0x4000);
      uVar1 = sub_08128A24(DAT_0202dadc._3_1_,5);
      sub_08002208(&UNK_08fa3d68 + (uVar1 & 0xff) * 0x14,0);
    }
    else {
      iVar2 = FUN_081288bc(DAT_0202dadc._3_1_ - 0x14,3);
      sub_08001EA4(&UNK_08fa3dac + iVar2 * 0x14,0x4000);
      iVar2 = FUN_081288bc(DAT_0202dadc._3_1_ - 0x14,3);
      sub_08002208(&UNK_08fa3db8 + iVar2 * 0x14,0);
    }
  }
  return in_lr;
}

