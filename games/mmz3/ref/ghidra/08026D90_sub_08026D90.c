// sub_08026D90 at 0x08026D90 (thumb)

undefined8 sub_08026D90(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x58) + (int)*(short *)(param_2 + 2);
  sVar1 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),iVar5);
  if (sVar1 == -0x7ff1) {
    uVar2 = 1;
    goto LAB_08026e4c;
  }
  if (sVar1 != -0x7ff2) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = -0x500;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = 0x500;
    }
    iVar3 = iVar3 + iVar4;
    sVar1 = sub_08008FEC(iVar3,iVar5);
    if (sVar1 == -0x7ff1) {
LAB_08026e2e:
      *(int *)(param_1 + 0x54) = iVar3;
      uVar2 = 1;
      goto LAB_08026e4c;
    }
    if (sVar1 != -0x7ff2) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar4 = 0x200;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar4 = -0x200;
      }
      iVar3 = iVar3 + iVar4;
      sVar1 = sub_08008FEC(iVar3,iVar5);
      if (sVar1 == -0x7ff1) goto LAB_08026e2e;
      if (sVar1 != -0x7ff2) {
        uVar2 = 0;
        goto LAB_08026e4c;
      }
    }
    *(int *)(param_1 + 0x54) = iVar3;
  }
  uVar2 = 2;
LAB_08026e4c:
  return CONCAT44(in_lr,uVar2);
}

