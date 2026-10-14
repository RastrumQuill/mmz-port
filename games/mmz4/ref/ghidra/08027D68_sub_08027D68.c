// sub_08027D68 at 0x08027D68 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08027D68(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if (*(ushort *)(param_1 + 0x14e) != 0) {
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar1 & 0x7fffffff;
    uVar1 = uVar1 * 2 >> 0x11 & 0xf;
    if (uVar1 <= (*(ushort *)(param_1 + 0x14e) & 0xff)) {
      sub_0801FE64(uVar1,&DAT_0202ea30);
    }
    if (DAT_0202ea10 == '\0') {
      sub_0801FEBC(&DAT_0202ea28,&local_c);
      _DAT_02000a10 = local_c._1_2_;
      DAT_02000a12 = local_8._1_2_;
    }
  }
  return uStack_4;
}

