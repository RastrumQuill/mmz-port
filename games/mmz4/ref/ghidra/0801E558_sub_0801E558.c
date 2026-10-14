// sub_0801E558 at 0x0801E558 (thumb)

undefined8 sub_0801E558(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x2ab000) {
    if (iVar2 < 0x1a4000) {
      if (iVar2 < 0x87000) {
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
    uVar1 = 3;
  }
  return CONCAT44(in_lr,uVar1);
}

