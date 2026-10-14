// sub_080224AC at 0x080224AC (thumb)

undefined4 sub_080224AC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if (*(ushort *)(param_1 + 0x14e) != 0) {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    uVar1 = uVar1 * 2 >> 0x11 & 0xf;
    if (uVar1 <= (*(ushort *)(param_1 + 0x14e) & 0xff)) {
      sub_0801ACF8(uVar1,&DAT_020302c0);
    }
    if (DAT_020302a0 == '\0') {
      sub_0801AD50(&DAT_020302b8,&local_c);
      DAT_020023d0._0_2_ = local_c._1_2_;
      DAT_020023d0._2_2_ = local_8._1_2_;
    }
  }
  return uStack_4;
}

