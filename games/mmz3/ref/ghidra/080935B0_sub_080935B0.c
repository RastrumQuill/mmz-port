// sub_080935B0 at 0x080935B0 (thumb)

undefined8 sub_080935B0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    if (param_2 < 0) {
      sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0xe00,*(int *)(param_1 + 0x58) + -0xa00);
      if (sVar1 != 0) {
        uVar2 = 1;
        goto LAB_08093608;
      }
    }
    else {
      sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0xe00,*(int *)(param_1 + 0x58) + -0xa00);
      if (sVar1 != 0) {
        uVar2 = 2;
        goto LAB_08093608;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
  }
  uVar2 = 0;
LAB_08093608:
  return CONCAT44(in_lr,uVar2);
}

