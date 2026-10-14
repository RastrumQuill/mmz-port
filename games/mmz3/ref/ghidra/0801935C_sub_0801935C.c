// sub_0801935C at 0x0801935C (thumb)

undefined8 sub_0801935C(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x2b9001) {
    if (iVar2 < 0x1b3001) {
      if (iVar2 < 0x19c800) {
        if (iVar2 < 0x4b001) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 6;
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

