// sub_0803C210 at 0x0803C210 (thumb)

undefined8 sub_0803C210(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xc3) == '\0') {
    uVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    uVar3 = uVar2 & 0xffff;
    if ((uVar2 & 0x8000) != 0) {
      uVar3 = 0;
    }
    if ((uVar3 & 0xf) == 0xf) {
      uVar3 = 0;
    }
    if ((uVar3 & 0xf) == 0) {
      if ((*(uint *)(iVar4 + 0x8c) & 8) == 0) {
        uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
        if ((uint)(int)*(short *)(&DAT_088505f8 + (uint)*(byte *)(param_1 + 0x10) * 2) < uVar2) {
          uVar1 = 2;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      sub_080D17D8(param_1 + 0x54,7,*(byte *)(param_1 + 10) >> 4 & 1);
      uVar1 = 1;
    }
  }
  else {
    *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc3) + -1;
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

