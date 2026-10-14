// sub_08013BC4 at 0x08013BC4 (thumb)

undefined4 sub_08013BC4(void)

{
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 8) && ((DAT_02001284 & 0xff) == 2)) {
    if (DAT_02000b04 < 0x5a0) {
      sub_08001EA4(&UNK_08fa4040 + (uint)((byte)DAT_0202dadc >> 1) * 0x14,0x4000);
      sub_08002208(&UNK_08fa404c + (uint)((byte)DAT_0202dadc >> 1) * 0x14,0);
    }
    else {
      sub_08001EA4(&UNK_08fa3ce4 + (0x2e - (uint)((byte)DAT_0202dadc >> 1)) * 0x14,0x4000);
      sub_08002208(&UNK_08fa3cf0 + (0x2e - (uint)((byte)DAT_0202dadc >> 1)) * 0x14,0);
    }
  }
  if ((DAT_02001284 >> 8 == 8) && ((DAT_02001284 & 0xff) == 6)) {
    sub_08001EA4(&UNK_08fa40a4 + (uint)(byte)(&DAT_0883103c)[DAT_0202dadc._1_1_] * 0x14,0x4000);
    sub_08002208(&UNK_08fa40b0 + (uint)(byte)(&DAT_0883103c)[DAT_0202dadc._1_1_] * 0x14,0);
    sub_08001EA4(&UNK_08fa4158 + (uint)(byte)(&DAT_0883103c)[DAT_0202dadc._2_1_] * 0x14,0x4000);
    sub_08002208(&UNK_08fa4164 + (uint)(byte)(&DAT_0883103c)[DAT_0202dadc._2_1_] * 0x14,0);
  }
  if ((DAT_02001286 >> 8 == 8) && ((DAT_02001286 & 0xff) == 7)) {
    sub_08001EA4(&UNK_08fa420c + (uint)(byte)(&DAT_0883103c)[DAT_0202dadc._3_1_] * 0x14,0x4000);
    sub_08002208(&UNK_08fa4218 + (uint)(byte)(&DAT_0883103c)[DAT_0202dadc._3_1_] * 0x14,0);
    sub_08001EA4(&UNK_08fa42c0 + (uint)(byte)(&DAT_0883103c)[(byte)DAT_0202dae0] * 0x14,0x4000);
    sub_08002208(&UNK_08fa42cc + (uint)(byte)(&DAT_0883103c)[(byte)DAT_0202dae0] * 0x14,0);
    sub_08001EA4(&UNK_08fa4374 + (uint)(byte)(&DAT_0883103c)[DAT_0202dae0._1_1_] * 0x14,0x4000);
    sub_08002208(&UNK_08fa4380 + (uint)(byte)(&DAT_0883103c)[DAT_0202dae0._1_1_] * 0x14,0);
  }
  if ((DAT_02001284 >> 8 == 8) && ((DAT_02001284 & 0xff) == 8)) {
    sub_08001EA4(&UNK_08fa4428 + (uint)(byte)(&DAT_0883103c)[DAT_0202dae0._2_1_] * 0x14,0x4000);
    sub_08002208(&UNK_08fa4434 + (uint)(byte)(&DAT_0883103c)[DAT_0202dae0._2_1_] * 0x14,0);
  }
  if ((DAT_02001286 >> 8 == 8) && ((DAT_02001286 & 0xff) == 0xb)) {
    sub_08001EA4(&UNK_08fa44dc + (uint)(byte)(&DAT_0883103c)[DAT_0202dae0._3_1_] * 0x14,0x4000);
    sub_08002208(&UNK_08fa44e8 + (uint)(byte)(&DAT_0883103c)[DAT_0202dae0._3_1_] * 0x14,0);
    sub_08001EA4(&UNK_08fa4590 + (uint)(byte)(&DAT_0883103c)[DAT_0202dae4] * 0x14,0x4000);
    sub_08002208(&UNK_08fa459c + (uint)(byte)(&DAT_0883103c)[DAT_0202dae4] * 0x14,0);
  }
  return in_lr;
}

