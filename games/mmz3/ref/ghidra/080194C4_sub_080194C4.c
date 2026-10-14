// sub_080194C4 at 0x080194C4 (thumb)

undefined8 sub_080194C4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*param_1 < 0x205800) || (0x1dfff < param_1[1])) {
    iVar2 = *param_1;
    if (iVar2 < 0x16f800) {
      if (((iVar2 < 0x124800) || (param_1[1] < 0x32001)) &&
         ((iVar2 < 0xd9800 || (0x32000 < param_1[1])))) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

