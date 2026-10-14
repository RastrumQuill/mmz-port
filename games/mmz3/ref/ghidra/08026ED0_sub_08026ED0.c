// sub_08026ED0 at 0x08026ED0 (thumb)

undefined8 sub_08026ED0(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x58) + (int)*(short *)(param_2 + 2) +
          ((int)((uint)*(ushort *)(param_2 + 6) << 0x10) >> 0x11) + 1;
  uVar2 = sub_08028370(param_1,*(undefined4 *)(param_1 + 0x54),iVar5);
  if ((uVar2 & 0xf) == 0) {
    sVar1 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),iVar5);
    if (sVar1 != -0x7ff2) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(param_1 + 0x54) + -0x500;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54) + 0x500;
      }
      sVar1 = sub_08008FEC(iVar4,iVar5);
      if (sVar1 != -0x7ff2) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar4 = *(int *)(param_1 + 0x54) + 0x200;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x54) + -0x200;
        }
        sVar1 = sub_08008FEC(iVar4,iVar5);
        if (sVar1 != -0x7ff2) goto LAB_08026f76;
      }
      *(int *)(param_1 + 0x54) = iVar4;
    }
    uVar3 = 2;
  }
  else {
LAB_08026f76:
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}

