// sub_08094568 at 0x08094568 (thumb)

undefined8 sub_08094568(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  param_3 = param_3 + 0x800;
  iVar4 = param_2 + -0x700;
  iVar5 = 0;
  do {
    sVar1 = sub_08007C7C(iVar4,param_3);
    if ((sVar1 != 0) && (uVar2 = sub_08007C7C(iVar4,param_3), (uVar2 & 0xf) != 0xf))
    goto LAB_080945cc;
    iVar4 = iVar4 + 0x1000;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  sVar1 = sub_08007C7C(param_2 + 0x700,param_3);
  if ((sVar1 == 0) || (uVar2 = sub_08007C7C(param_2 + 0x700,param_3), (uVar2 & 0xf) == 0xf)) {
    uVar3 = 0;
  }
  else {
LAB_080945cc:
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

