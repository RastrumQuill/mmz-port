// sub_080162EC at 0x080162EC (thumb)

undefined4 sub_080162EC(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  if ((DAT_02002c54 >> 8 == 0x11) && ((DAT_02002c54 & 0xff) == 1)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0x6a,0);
    }
    sub_080041E4(0x6a);
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    sub_08004230(0x6a);
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
  }
  if ((DAT_02002c54 >> 8 == 0x11) && ((DAT_02002c54 & 0xff) == 4)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0x68,0);
    }
    sub_080041E4(0x68);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    sub_08004230(0x68);
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
  }
  if (DAT_0202f4a9 == '\x02') {
    DAT_0202f4aa._0_1_ = (byte)DAT_0202f4aa + 1;
    if (((param_1[1] < 0x32000) && (0x1dfff < *param_1)) && (*param_1 < 0x87001)) {
      if (((byte)DAT_0202f4aa & 0xf) == 0) {
        uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar1 & 0x7fffffff;
        iVar2 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x3c0);
        local_24 = iVar2 * 0x100 + 0x4b000;
        local_20 = 0xa000;
        sub_080C8C10(&local_24,0x380);
      }
    }
    else if (param_1[1] < 0x46000) {
      if (((byte)DAT_0202f4aa & 0x3f) == 0) {
        uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar1 & 0x7fffffff;
        iVar2 = sub_080FE4D8(uVar1 * 2 >> 0x11,0xf0);
        local_1c = iVar2 * 0x100 + 0x2d000;
        local_18 = 0x32000;
        sub_080C8C10(&local_1c,0x140);
      }
    }
    else if (((byte)DAT_0202f4aa & 0x1f) == 0) {
      uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar1 & 0x7fffffff;
      iVar2 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x1e0);
      local_14 = iVar2 * 0x100 + 0x87000;
      local_10 = 0x50000;
      sub_080C8C10(&local_14,0x140);
    }
  }
  return in_lr;
}

