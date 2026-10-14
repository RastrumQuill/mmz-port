// sub_08026444 at 0x08026444 (thumb)

undefined8 sub_08026444(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < 1) {
    iVar2 = sub_08008120(param_2,param_3);
  }
  else {
    iVar2 = sub_08007EE0(param_2,param_3);
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x58) < 1) {
      iVar2 = sub_08007CF8(param_2,param_3);
    }
    else {
      iVar2 = sub_08007B30(param_2,param_3);
    }
    if (iVar2 == 0) {
      sVar1 = *(short *)(&DAT_082aa1c6 + (uint)*(byte *)(param_1 + 0x11) * 2);
      uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if ((uint)(int)sVar1 < uVar4) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_080264b4;
    }
  }
  uVar3 = 1;
LAB_080264b4:
  return CONCAT44(in_lr,uVar3);
}

