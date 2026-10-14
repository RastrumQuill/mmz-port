// sub_0800B838 at 0x0800B838 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800B838(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[(*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14] = (ushort)uVar1 | 0x47;
    if (uVar2 == 0x12) {
      sub_081284E4(&DAT_08b392a0,&DAT_0202cad4,0x200);
    }
    else {
      sub_081284E4(&DAT_08b392a0,(uVar1 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)(&DAT_02000a0c + (uVar2 >> 4) * 2) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_0202dae0._2_2_ != 0) && (DAT_0202dae0._2_2_ < 0x100)) {
    DAT_0202dae0._2_2_ = DAT_0202dae0._2_2_ + 1;
  }
  DAT_0202daf4._2_2_ = DAT_0202daf4._2_2_ + 0x20;
  DAT_0202daf4._0_2_ = (short)DAT_0202daf4 + 0x50;
  DAT_0202daf0._2_2_ = DAT_0202daf0._2_2_ + 0xa0;
  DAT_0202daf0._0_2_ = (short)DAT_0202daf0 + 0xf0;
  _DAT_0202daee = _DAT_0202daee + 400;
  DAT_0202daec = DAT_0202daec + 0x280;
  DAT_0202dae8._2_2_ = DAT_0202dae8._2_2_ + 0x620;
  DAT_0202dae8._0_2_ = (short)DAT_0202dae8 + 0x800;
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) ^ 1;
  return in_lr;
}

