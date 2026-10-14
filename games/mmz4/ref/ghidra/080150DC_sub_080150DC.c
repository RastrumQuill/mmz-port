// sub_080150DC at 0x080150DC (thumb)

undefined4 sub_080150DC(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 1) {
    if ((DAT_02001284 >> 8 == 9) && ((DAT_02001284 & 0xff) == 0)) {
      sub_08001EA4(&DAT_08fa3e74 + ((byte)DAT_0202dadc >> 1 & 3) * 0x14,0x4000);
      sub_08002208(&DAT_08fa3e80 + ((byte)DAT_0202dadc >> 1 & 3) * 0x14,0);
    }
    if (DAT_02001286 >> 8 == 9) {
      if ((DAT_02001286 & 0xff) == 2) {
        uVar1 = sub_08128A9C(DAT_0202dadc._1_1_ >> 2,3);
        sub_08001EA4(&UNK_08fa3ec4 + (uVar1 & 0xff) * 0x14,0x4000);
        uVar1 = sub_08128A9C(DAT_0202dadc._1_1_ >> 2,3);
        sub_08002208(&UNK_08fa3ed0 + (uVar1 & 0xff) * 0x14,0);
        uVar1 = sub_08128A9C(DAT_0202dadc._1_1_ >> 2,3);
        sub_08001EA4(&UNK_08fa4004 + (uVar1 & 0xff) * 0x14,0x4000);
        uVar1 = sub_08128A9C(DAT_0202dadc._1_1_ >> 2,3);
        sub_08002208(&UNK_08fa4010 + (uVar1 & 0xff) * 0x14,0);
      }
      if (DAT_02001286 >> 8 == 9) {
        if ((DAT_02001286 & 0xff) == 1) {
          uVar1 = sub_08128A9C(DAT_0202dadc._2_1_ >> 2,3);
          sub_08001EA4(&UNK_08fa3ce4 + (0x1d - (uVar1 & 0xff)) * 0x14,0x4000);
          uVar1 = sub_08128A9C(DAT_0202dadc._2_1_ >> 2,3);
          sub_08002208(&UNK_08fa3cf0 + (0x1d - (uVar1 & 0xff)) * 0x14,0);
        }
        if ((DAT_02001286 >> 8 == 9) && ((DAT_02001286 & 0xff) == 4)) {
          if (DAT_0202dadc._3_1_ < 0x60) {
            sub_08001EA4(&DAT_08fa3f50,0x4000);
            sub_08002208(&DAT_08fa3f5c,0);
          }
          else {
            iVar2 = FUN_081288bc(DAT_0202dadc._3_1_ - 0x60,3);
            sub_08001EA4(&DAT_08fa3f50 + (uint)(byte)(&DAT_08832518)[iVar2] * 0x14,0x4000);
            iVar2 = FUN_081288bc(DAT_0202dadc._3_1_ - 0x60,3);
            sub_08002208(&DAT_08fa3f5c + (uint)(byte)(&DAT_08832518)[iVar2] * 0x14,0);
          }
          uVar1 = sub_08128A24((undefined)DAT_0202dae0,3);
          sub_08001EA4(&DAT_08fa3fb4 + (uint)(byte)(&DAT_08832522)[uVar1 & 0xff] * 0x14,0x4000);
          uVar1 = sub_08128A24((undefined)DAT_0202dae0,3);
          sub_08002208(&DAT_08fa3fc0 + (uint)(byte)(&DAT_08832522)[uVar1 & 0xff] * 0x14,0);
        }
      }
    }
  }
  else {
    if ((DAT_02001284 >> 8 == 9) && ((DAT_02001284 & 0xff) == 0)) {
      sub_08001EA4(&DAT_08fa3e74,0x4000);
      sub_08002208(&DAT_08fa3e80,0);
    }
    if (DAT_02001286 >> 8 == 9) {
      if ((DAT_02001286 & 0xff) == 2) {
        sub_08001EA4(&DAT_08fa3eec,0x4000);
        sub_08002208(&DAT_08fa3ef8,0);
        sub_08001EA4(&DAT_08fa402c,0x4000);
        sub_08002208(&DAT_08fa4038,0);
      }
      if (DAT_02001286 >> 8 == 9) {
        if ((DAT_02001286 & 0xff) == 1) {
          sub_08001EA4(&DAT_08fa3f3c,0x4000);
          sub_08002208(&DAT_08fa3f48,0);
        }
        if ((DAT_02001286 >> 8 == 9) && ((DAT_02001286 & 0xff) == 4)) {
          sub_08001EA4(&DAT_08fa3f50,0x4000);
          sub_08002208(&DAT_08fa3f5c,0);
          sub_08001EA4(&DAT_08fa3fb4,0x4000);
          sub_08002208(&DAT_08fa3fc0,0);
        }
      }
    }
  }
  return in_lr;
}

