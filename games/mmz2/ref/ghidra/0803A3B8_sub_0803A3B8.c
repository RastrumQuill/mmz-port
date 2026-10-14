// sub_0803A3B8 at 0x0803A3B8 (thumb)

undefined4 sub_0803A3B8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((byte)(*(char *)(param_1 + 0x13) - 0xcU) < 2) {
    uVar2 = 9;
    uVar1 = 5;
    if (*(char *)(param_1 + 0x13) != '\f') goto LAB_0803a3d8;
  }
  else {
    uVar2 = 0xb;
  }
  uVar1 = 0;
LAB_0803a3d8:
  sub_0803A9C0(param_1,uVar2,uVar1,0);
  return in_lr;
}

