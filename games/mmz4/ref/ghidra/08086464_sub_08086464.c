// sub_08086464 at 0x08086464 (thumb)

undefined4 sub_08086464(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885b828);
    sub_080868A4(param_1,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080868D8(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08007C7C(iVar4,iVar3);
  if ((sVar1 == 0) || (uVar2 = sub_08007C7C(iVar4,iVar3), (uVar2 & 0xf) == 0xf)) {
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = iVar3;
  }
  else {
    *(undefined *)(param_1 + 0xb7) = 1;
  }
  return in_lr;
}

