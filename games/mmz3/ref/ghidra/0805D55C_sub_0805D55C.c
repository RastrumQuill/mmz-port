// sub_0805D55C at 0x0805D55C (thumb)

undefined8 sub_0805D55C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + param_2,*(undefined4 *)(param_1 + 0x58));
  uVar1 = uVar1 & 0xffff;
  if (uVar1 == 0) {
    uVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + param_2,*(int *)(param_1 + 0x58) + -0x2000);
    uVar1 = uVar1 & 0xffff;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

