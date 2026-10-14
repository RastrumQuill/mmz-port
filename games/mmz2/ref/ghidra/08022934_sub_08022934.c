// sub_08022934 at 0x08022934 (thumb)

undefined8
sub_08022934(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5,int param_6,
            uint param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((param_7 & 0xf) != 0) && ((param_7 & 0x8000) == 0)) {
    iVar3 = (param_4 & 0xfffff000) - 1;
    uVar1 = sub_08008D80(param_3,iVar3);
    uVar2 = uVar1 & 0xffff;
    iVar4 = 6;
    do {
      if ((uVar1 & 0xf) == 0) goto LAB_080229da;
      if ((uVar1 & 0x8000) != 0) break;
      iVar3 = iVar3 + -0x1000;
      uVar1 = sub_08008D80(param_3,iVar3);
      uVar2 = uVar1 & 0xffff;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (((uVar2 & 0xf) == 0) || ((uVar2 & 0x8000) != 0)) {
LAB_080229da:
      do {
        do {
          iVar4 = iVar3;
          iVar3 = iVar4 + 0x100;
          uVar2 = sub_08008D80(param_3,iVar3);
        } while ((uVar2 & 0xf) == 0);
      } while ((uVar2 & 0x8000) != 0);
      iVar3 = iVar4 - param_4;
      if ((-1 < *(int *)(param_1 + 4) - *(int *)(param_2 + 4)) &&
         (*(int *)(param_2 + 4) <= *(int *)(param_1 + 4) + iVar3)) {
        if (param_6 != 0) {
          *(int *)(param_1 + 4) = iVar4 - param_5;
        }
        goto LAB_08022a2a;
      }
    }
  }
  iVar3 = 0;
LAB_08022a2a:
  return CONCAT44(in_lr,iVar3);
}

