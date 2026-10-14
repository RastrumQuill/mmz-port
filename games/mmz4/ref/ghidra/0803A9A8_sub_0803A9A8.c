// sub_0803A9A8 at 0x0803A9A8 (thumb)

undefined8 sub_0803A9A8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  uVar3 = uVar1 & 0xffff;
  if ((uVar1 & 0xf) == 0xf) {
    uVar3 = 0;
  }
  if ((uVar3 & 0x8000) != 0) {
    uVar3 = 0;
  }
  if ((uVar3 & 0xf) == 0) {
    if (((param_2 & 1) == 0) || ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0)) {
      uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if (uVar1 < 0x4001) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xff;
      }
    }
    else {
      if ((param_2 & 3) != 0) {
        sub_080D17D8(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      sub_08002B10(0x2b);
      uVar2 = 2;
    }
  }
  else {
    if ((param_2 & 4) != 0) {
      sub_080D17D8(param_1 + 0x54,7,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

