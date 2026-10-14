// sub_0801ADE0 at 0x0801ADE0 (thumb)

undefined8 sub_0801ADE0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = 0xffffffff;
  if (0 < param_3) {
    uVar1 = 1;
  }
  uVar2 = sub_08009AFC(param_1,param_2);
  if (((uVar2 & 0xf) == 0) || (0xf < (uVar2 & 0xf))) {
    uVar2 = 0;
  }
  else {
    uVar2 = sub_0801AE24(param_1,param_2,uVar1);
    uVar2 = uVar2 & 0xff;
  }
  return CONCAT44(in_lr,uVar2);
}

