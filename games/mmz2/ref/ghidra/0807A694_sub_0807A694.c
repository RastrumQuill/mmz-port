// sub_0807A694 at 0x0807A694 (thumb)

ulonglong sub_0807A694(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_020011d0 & 0x7f) == 7) {
    uVar1 = sub_0800E964(*(int *)(param_1 + 0x54) + -0x2000,*(int *)(param_1 + 0x58) + 0x2000);
  }
  else {
    uVar1 = sub_08011768(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000);
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

