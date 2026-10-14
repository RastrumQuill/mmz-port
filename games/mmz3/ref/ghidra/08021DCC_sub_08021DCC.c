// sub_08021DCC at 0x08021DCC (thumb)

undefined8 sub_08021DCC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((DAT_020301b2 & 1) != 0) {
    uVar1 = sub_08021FE4(param_1);
  }
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  sub_0802204C(param_1);
  sub_0802242C(param_1);
  sub_080224AC(param_1);
  sub_080220B4(param_1);
  sub_0802233C(param_1);
  sub_08022358(param_1);
  sub_08022374(param_1);
  return CONCAT44(in_lr,uVar1);
}

