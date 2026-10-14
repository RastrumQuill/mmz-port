// sub_080E538C at 0x080E538C (thumb)

undefined8 sub_080E538C(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  uVar3 = uVar1 & 0xffff;
  if (uVar1 * 0x10000 + 0x7ff20000 >> 0x10 < 2) {
    uVar3 = 0;
  }
  if ((uVar3 & 0xf) == 0) {
    uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar1 < 0x1001) {
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

