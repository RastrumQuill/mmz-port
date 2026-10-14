// sub_08107D6C at 0x08107D6C (thumb)

undefined8 sub_08107D6C(undefined param_1,undefined4 *param_2,undefined param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *param_2;
  iVar5 = param_2[1];
  if (*(short *)(DAT_0202eda4 + 10) < 3) {
    iVar2 = 0;
    goto LAB_08107e26;
  }
  iVar2 = sub_08005500(DAT_0202eda4);
  if (iVar2 == 0) goto LAB_08107e26;
  *(undefined *)(iVar2 + 0x25) = 1;
  *(undefined *)(iVar2 + 9) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0x8107e35;
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  if (*(byte *)(iVar2 + 0x11) < 2) {
    sVar1 = sub_081082AC(uVar6,iVar5);
    if (sVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x54) = uVar6;
      goto LAB_08107e1a;
    }
    iVar3 = sub_08008534(uVar6,iVar5);
    *(int *)(iVar2 + 0x58) = iVar3;
    if (iVar5 < iVar3) {
      uVar4 = sub_08008748(uVar6,iVar5);
      *(undefined4 *)(iVar2 + 0x58) = uVar4;
    }
    *(undefined4 *)(iVar2 + 0x54) = uVar6;
  }
  else {
    *(undefined4 *)(iVar2 + 0x54) = uVar6;
    iVar5 = sub_08008534(uVar6,iVar5);
LAB_08107e1a:
    *(int *)(iVar2 + 0x58) = iVar5;
  }
  *(undefined *)(iVar2 + 0x10) = param_1;
  *(undefined *)(iVar2 + 0x11) = param_3;
LAB_08107e26:
  return CONCAT44(in_lr,iVar2);
}

