// sub_08039954 at 0x08039954 (thumb)

undefined8 sub_08039954(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar2 = sub_08009240(param_2,param_3);
  }
  else {
    iVar2 = sub_080090D4(param_2,param_3);
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x60) < 1) {
      iVar2 = sub_08008F50(param_2,param_3);
    }
    else {
      iVar2 = sub_08008DE8(param_2,param_3);
    }
    if (iVar2 == 0) {
      sVar1 = *(short *)(&DAT_083360e2 + (uint)*(byte *)(param_1 + 0x11) * 2);
      if ((DAT_0202e140 == '\0') &&
         (uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), (uint)(int)sVar1 < uVar4)) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_080399ce;
    }
  }
  uVar3 = 1;
LAB_080399ce:
  return CONCAT44(in_lr,uVar3);
}

