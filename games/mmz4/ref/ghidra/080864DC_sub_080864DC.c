// sub_080864DC at 0x080864DC (thumb)

undefined4 sub_080864DC(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885b858);
    sub_080868A4(param_1,0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080868D8(param_1);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08007C7C(uVar4,iVar3);
  if ((sVar1 == 0) || (uVar2 = sub_08007C7C(uVar4,iVar3), (uVar2 & 0xf) == 0xf)) {
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    *(undefined *)(param_1 + 0xb7) = 1;
  }
  return in_lr;
}

