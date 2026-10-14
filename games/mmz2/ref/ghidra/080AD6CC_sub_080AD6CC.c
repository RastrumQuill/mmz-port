// sub_080AD6CC at 0x080AD6CC (thumb)

undefined4 sub_080AD6CC(undefined4 param_1,int param_2)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = sub_08006B50(DAT_0202f084);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0x25) = 1;
    *(undefined *)(iVar3 + 9) = 5;
    *(undefined4 *)(iVar3 + 0x14) = 0x80ad855;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined *)(iVar3 + 0x22) = 0;
    if ((DAT_0202d004 < param_2) || (sVar2 = sub_08008354(param_1,param_2), sVar2 == -0x8000)) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(iVar3 + 0x10) = uVar1;
    *(undefined *)(iVar3 + 0x11) = 0;
    *(undefined4 *)(iVar3 + 0x54) = param_1;
    *(int *)(iVar3 + 0x58) = param_2;
  }
  return in_lr;
}

