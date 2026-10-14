// sub_08013D58 at 0x08013D58 (thumb)

undefined8 sub_08013D58(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 - 0x1e000U < 0x1e8001) {
    if (iVar2 < 0x1f6001) {
      if (iVar2 < 0x70000) {
        uVar1 = 0;
      }
      else if (iVar2 < 0xb4000) {
        uVar1 = 1;
      }
      else if (iVar2 - 0x12c001U < 0x15fff) {
        uVar1 = 3;
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

