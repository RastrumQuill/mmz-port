// sub_0800EE6C at 0x0800EE6C (thumb)

undefined4 sub_0800EE6C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_02022ab0 == 0x10) {
    iVar3 = *param_1;
    if (iVar3 < 0x3de000) {
      return 0;
    }
    iVar1 = 0x419fff;
  }
  else if (DAT_02022ab0 == 0x20) {
    iVar3 = *param_1;
    if (iVar3 < 0x492000) {
      return 0;
    }
    iVar1 = 0x4f8fff;
  }
  else {
    iVar3 = *param_1;
    if (iVar3 < 0x40b000) {
      return 0;
    }
    iVar1 = 0x464fff;
  }
  if (iVar1 < iVar3) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

