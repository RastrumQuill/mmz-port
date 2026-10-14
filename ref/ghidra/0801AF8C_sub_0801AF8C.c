// sub_0801AF8C at 0x0801AF8C (thumb)

undefined8 sub_0801AF8C(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = param_1 & 0xfffff000;
  if (0 < param_3) {
    uVar4 = uVar4 + 0xfff;
  }
  iVar3 = (param_2 & 0xfffff000) + 0xfff;
  iVar2 = 1;
  do {
    while( true ) {
      iVar1 = sub_08009C3C(uVar4,iVar3);
      if (iVar1 != 0) break;
      iVar3 = iVar3 + 0x1000;
    }
    if (iVar1 < 0) {
      iVar1 = sub_08009C3C(uVar4 + param_3,iVar1 + iVar3 + 0x200);
      if (iVar1 != 0) {
        if (-1 < iVar1) {
          iVar2 = -1;
          goto LAB_0801b036;
        }
        if (iVar1 + 0x300U < 0x201) goto LAB_0801b016;
      }
      iVar2 = 0;
LAB_0801b036:
      iVar3 = uVar4 - param_1;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if ((param_4 < iVar3) || (iVar2 != 0)) {
        iVar3 = -iVar3;
      }
      goto LAB_0801b04a;
    }
    iVar2 = -1;
LAB_0801b016:
    if (iVar2 < 1) goto LAB_0801b036;
    uVar4 = uVar4 + param_3 * 0x1000;
  } while ((uVar4 - param_1) + 0x2000 < 0x4001);
  iVar3 = 0;
LAB_0801b04a:
  return CONCAT44(in_lr,iVar3);
}

