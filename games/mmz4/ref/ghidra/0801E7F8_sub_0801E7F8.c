// sub_0801E7F8 at 0x0801E7F8 (thumb)

undefined8 sub_0801E7F8(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1[1] < 0x64000) {
    if (param_1[1] < 0x1e000) {
      if (*param_1 < 0xda000) {
        uVar1 = 7;
      }
      else {
        uVar1 = 3;
      }
      goto LAB_0801e84a;
    }
  }
  else {
    if (*param_1 < 0x96000) {
      uVar1 = 0;
      goto LAB_0801e84a;
    }
    if (*param_1 < 0xc3000) {
      uVar1 = 2;
      goto LAB_0801e84a;
    }
  }
  uVar1 = 1;
LAB_0801e84a:
  return CONCAT44(in_lr,uVar1);
}

