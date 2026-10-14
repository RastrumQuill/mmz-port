// sub_080862F8 at 0x080862F8 (thumb)

undefined8 sub_080862F8(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  sVar1 = sub_08008354();
  if ((sVar1 == -0x8000) || (DAT_0202d004 < param_2)) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

