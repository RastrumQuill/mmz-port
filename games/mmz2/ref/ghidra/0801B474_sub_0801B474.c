// sub_0801B474 at 0x0801B474 (thumb)

undefined8 sub_0801B474(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((DAT_0202ec42 & 1) != 0) {
    uVar1 = sub_0801B6C4(param_1);
  }
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  sub_0801B730(param_1);
  sub_0801BB78(param_1);
  sub_0801BBFC(param_1);
  sub_0801B800(param_1);
  sub_0801BA88(param_1);
  sub_0801BAA4(param_1);
  sub_0801BAC0(param_1);
  return CONCAT44(in_lr,uVar1);
}

