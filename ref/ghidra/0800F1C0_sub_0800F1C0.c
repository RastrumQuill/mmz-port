// sub_0800F1C0 at 0x0800F1C0 (thumb)

undefined4 sub_0800F1C0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 < 0x285000) {
    if (param_1[1] < 0x64000) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    iVar2 = param_1[1];
    if (iVar2 < 0x64000) {
      uVar1 = 2;
    }
    else if ((iVar2 < 0x6e000) && (*param_1 < 0x2b2000)) {
      uVar1 = 3;
    }
    else if (iVar2 < 0x82000) {
      uVar1 = 4;
    }
    else {
      uVar1 = 5;
    }
  }
  return uVar1;
}

