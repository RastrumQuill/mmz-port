// sub_080B2A04 at 0x080B2A04 (thumb)

undefined8 sub_080B2A04(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + 0xa00,*(int *)(param_1 + 0x58) + -0x1e00);
  if ((sVar1 == 0) &&
     (sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + -0xa00,*(int *)(param_1 + 0x58) + -0x1e00),
     sVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

