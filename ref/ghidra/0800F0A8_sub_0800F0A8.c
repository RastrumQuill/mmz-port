// sub_0800F0A8 at 0x0800F0A8 (thumb)

undefined4 sub_0800F0A8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (0xd2000 < *param_1 - 0x1e000U) {
    return 2;
  }
  iVar2 = param_1[1];
  if (*param_1 - 0x78001U < 0x1dfff) {
    if ((0x1c2000 < iVar2) && (iVar2 < 0x1d6000)) {
      return 3;
    }
    if (((*param_1 - 0x78001U < 0x1dfff) && (0x1a4000 < iVar2)) && (iVar2 < 0x1b8000)) {
      return 4;
    }
  }
  if ((iVar2 < 0x1ba000) || ((iVar2 < 0x1d7000 && (*param_1 < 0x78000)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

