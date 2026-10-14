// sub_080198AC at 0x080198AC (thumb)

undefined8
sub_080198AC(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (((param_6 & 0xf) != 0) && ((param_6 & 0x80) == 0)) {
    iVar4 = (param_3 & 0xfffff000) - 1;
    uVar1 = sub_08009B9C(param_2,iVar4);
    uVar3 = uVar1 & 0xff;
    iVar5 = 6;
    do {
      if ((uVar1 & 0xf) == 0) goto LAB_08019946;
      if ((uVar1 & 0x80) != 0) break;
      iVar4 = iVar4 + -0x1000;
      uVar1 = sub_08009B9C(param_2,iVar4);
      uVar3 = uVar1 & 0xff;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (((uVar3 & 0xf) == 0) || ((uVar3 & 0x80) != 0)) {
LAB_08019946:
      do {
        do {
          iVar5 = iVar4;
          iVar4 = iVar5 + 0x100;
          uVar3 = sub_08009B9C(param_2,iVar4);
        } while ((uVar3 & 0xf) == 0);
      } while ((uVar3 & 0x80) != 0);
      if (param_5 != 0) {
        *(int *)(param_1 + 4) = iVar5 - param_4;
      }
      uVar2 = 1;
      goto LAB_0801997e;
    }
  }
  uVar2 = 0;
LAB_0801997e:
  return CONCAT44(in_lr,uVar2);
}

