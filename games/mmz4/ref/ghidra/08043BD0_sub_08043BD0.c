// sub_08043BD0 at 0x08043BD0 (thumb)

undefined8 sub_08043BD0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + -0x400;
    iVar4 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + 0x400;
    iVar4 = *(int *)(param_1 + 0x58);
  }
  uVar2 = sub_08007C7C(iVar1,iVar4 + 0x400);
  uVar5 = uVar2 & 0xffff;
  if ((uVar2 & 0xf) == 0xf) {
    uVar5 = 0;
  }
  if ((uVar5 & 0x8000) != 0) {
    uVar5 = 0;
  }
  if ((uVar5 & 0xf) == 0) {
    if (((param_2 & 1) == 0) || ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0)) {
      uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if (uVar2 < 0x4001) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xff;
      }
    }
    else {
      if ((param_2 & 3) != 0) {
        sub_080D17D8(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      sub_08002B10(0x2b);
      uVar3 = 2;
    }
  }
  else {
    if ((param_2 & 4) != 0) {
      sub_080D17D8(param_1 + 0x54,7,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

