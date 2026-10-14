// sub_080201C0 at 0x080201C0 (thumb)

undefined8 sub_080201C0(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (((param_3 & 0xf) == 1) || (0xd < (param_3 & 0xf))) {
    uVar1 = sub_08008354(param_1,param_2 + -1);
    uVar2 = uVar1 & 0xffff;
    if ((uVar1 & 0xf) - 2 < 0xc) goto LAB_080201f2;
  }
  uVar2 = param_3 & 0xffff;
LAB_080201f2:
  return CONCAT44(in_lr,uVar2);
}

