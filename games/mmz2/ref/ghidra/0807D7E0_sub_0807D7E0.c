// sub_0807D7E0 at 0x0807D7E0 (thumb)

undefined4 sub_0807D7E0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(DAT_0202e130 + 0x54);
  iVar2 = *(int *)(param_1 + 0x54);
  if (((iVar3 - iVar2) + 0x6800U < 0xd001) &&
     ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x4000U < 0x8001)) {
    if (iVar2 < iVar3 != (bool)(~(*(byte *)(param_1 + 10) >> 4) & 1)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else if (((bool)(*(byte *)(param_1 + 10) >> 4 & 1) == iVar2 < iVar3) &&
          (uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar1 & 0x7fffffff,
          3 < (uVar1 * 2 >> 0x11 & 0xf))) {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

