// sub_080B2460 at 0x080B2460 (thumb)

undefined4 sub_080B2460(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x58) != (int)*(short *)(param_1 + 200)) {
    if (*(short *)(param_1 + 200) < 1) {
      sub_0809C930(param_1,1);
    }
    else {
      sub_0809C930(param_1,2);
    }
  }
  sub_0809C980(param_1);
  sVar1 = *(short *)(param_1 + 200);
  iVar3 = (int)sVar1;
  *(int *)(param_1 + 0x58) = iVar3;
  iVar2 = *(int *)(param_1 + 0x50) + iVar3;
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar3 < 1) {
    if (*(int *)(param_1 + 0xc0) <= iVar2 + iVar3) {
      return in_lr;
    }
  }
  else if (iVar2 + iVar3 <= *(int *)(param_1 + 0xc0) + 0x8000) {
    return in_lr;
  }
  *(short *)(param_1 + 200) = -sVar1;
  return in_lr;
}

