// sub_080C8E4C at 0x080C8E4C (thumb)

undefined8 sub_080C8E4C(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08008354();
  if ((sVar1 == -0x8000) || (DAT_0202d004 < param_2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

