// sub_080946E8 at 0x080946E8 (thumb)

undefined8 sub_080946E8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  param_2 = param_2 + 0x700;
  iVar3 = *(int *)(param_1 + 0x58);
  iVar4 = iVar3 + -0x2000;
  uVar1 = sub_08007020(*(undefined4 *)(param_1 + 0x54));
  if ((ushort)((uVar1 & 0xf) - 2) < 6) {
    iVar3 = 0;
    do {
      uVar1 = sub_08007020(param_2,iVar4);
      if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
         (((uVar1 & 0xf) != 0xf && (5 < (ushort)((uVar1 & 0xf) - 2))))) goto LAB_080947d2;
      iVar4 = iVar4 + 0x1000;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else {
    iVar5 = 0;
    do {
      uVar1 = sub_08007020(param_2,iVar4);
      if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) goto LAB_080947d2;
      iVar4 = iVar4 + 0x1000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar1 = sub_08007C7C(param_2,iVar3 + -1);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
       (((uVar1 & 0xf) != 0xf && (5 < (ushort)((uVar1 & 0xf) - 2))))) {
LAB_080947d2:
      uVar2 = 1;
      goto LAB_080947de;
    }
  }
  uVar2 = 0;
LAB_080947de:
  return CONCAT44(in_lr,uVar2);
}

