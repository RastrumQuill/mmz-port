// sub_0800DE04 at 0x0800DE04 (thumb)

undefined4 sub_0800DE04(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 5) && ((DAT_02002c54 & 0xff) == 0)) {
    bVar1 = (&DAT_0833a785)[(uint)DAT_0202f4b0._2_2_ * 2];
    while (bVar1 <= (ushort)DAT_0202f4b0) {
      DAT_0202f4b0._2_2_ = DAT_0202f4b0._2_2_ + 1;
      bVar1 = (&DAT_0833a785)[(uint)DAT_0202f4b0._2_2_ * 2];
    }
    sub_08003AB0(&UNK_087d5d74 + (uint)(byte)(&DAT_0833a784)[(uint)DAT_0202f4b0._2_2_ * 2] * 0x14,
                 0x4000);
    sub_08003E14(&UNK_087d5d80 + (uint)(byte)(&DAT_0833a784)[(uint)DAT_0202f4b0._2_2_ * 2] * 0x14,0)
    ;
    uVar2 = sub_080FE460((undefined2)DAT_0202f4b4,0xc);
    sub_08003AB0(&UNK_087d5dd8 + (uVar2 & 0xffff) * 0x14,0x4000);
    uVar2 = sub_080FE460((undefined2)DAT_0202f4b4,0xc);
    sub_08003E14(&UNK_087d5de4 + (uVar2 & 0xffff) * 0x14,0);
    uVar2 = sub_080FE460((undefined2)DAT_0202f4b4,0xc);
    sub_08003AB0(&UNK_087d5e28 + (uVar2 & 0xffff) * 0x14,0x4000);
    uVar2 = sub_080FE460((undefined2)DAT_0202f4b4,0xc);
    sub_08003E14(&UNK_087d5e34 + (uVar2 & 0xffff) * 0x14,0);
    bVar1 = (&DAT_0833a797)[(uint)DAT_0202f4b8._2_2_ * 2];
    while (bVar1 <= (ushort)DAT_0202f4b8) {
      DAT_0202f4b8._2_2_ = DAT_0202f4b8._2_2_ + 1;
      bVar1 = (&DAT_0833a797)[(uint)DAT_0202f4b8._2_2_ * 2];
    }
    sub_08003AB0(&UNK_087d5e8c + (uint)(byte)(&DAT_0833a796)[(uint)DAT_0202f4b8._2_2_ * 2] * 0x14,
                 0x4000);
    sub_08003E14(&UNK_087d5e98 + (uint)(byte)(&DAT_0833a796)[(uint)DAT_0202f4b8._2_2_ * 2] * 0x14,0)
    ;
  }
  return in_lr;
}

