// sub_081086CC at 0x081086CC (thumb)

undefined8 sub_081086CC(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C(param_1 + -0x700,param_2);
  uVar1 = uVar1 & 0xffff;
  uVar2 = sub_08007C7C(param_1 + 0x700,param_2);
  uVar2 = uVar2 & 0xffff;
  if (uVar1 == 0xf) {
    uVar1 = 0;
  }
  if (uVar2 == 0xf) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar1 | uVar2);
}

