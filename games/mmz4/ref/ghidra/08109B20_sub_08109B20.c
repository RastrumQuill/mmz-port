// sub_08109B20 at 0x08109B20 (thumb)

undefined8 sub_08109B20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (((uVar1 & 0xf) != 0xf) && ((uVar1 & 0x8000) == 0)) {
    if ((uVar1 & 0xf) != 0) {
      uVar2 = 1;
      goto LAB_08109b66;
    }
    uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x1000 < uVar1) {
      uVar2 = 2;
      goto LAB_08109b66;
    }
  }
  uVar2 = 0;
LAB_08109b66:
  return CONCAT44(in_lr,uVar2);
}

