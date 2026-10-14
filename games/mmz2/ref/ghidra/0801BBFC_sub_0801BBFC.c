// sub_0801BBFC at 0x0801BBFC (thumb)

undefined4 sub_0801BBFC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if (*(ushort *)(param_1 + 0x14e) != 0) {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    uVar1 = uVar1 * 2 >> 0x11 & 0xf;
    if (uVar1 <= (*(ushort *)(param_1 + 0x14e) & 0xff)) {
      sub_08015518(uVar1,&DAT_0202ed50);
    }
    if (DAT_0202ed30 == '\0') {
      sub_08015570(&DAT_0202ed48,&local_c);
      DAT_02000fa0._0_2_ = local_c._1_2_;
      DAT_02000fa0._2_2_ = local_8._1_2_;
    }
  }
  return uStack_4;
}

