// sub_0803A8D4 at 0x0803A8D4 (thumb)

undefined8 sub_0803A8D4(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = sub_08080398(param_2);
  sVar1 = (&DAT_080c8e24)[*(byte *)(param_1 + 0x1f) + 0x40];
  iVar5 = *(int *)(param_1 + 0x4c) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1f)] * 0x30;
  *(int *)(iVar2 + 0x4c) = iVar5;
  iVar3 = *(int *)(param_1 + 0x50) + sVar1 * -0x30;
  *(int *)(iVar2 + 0x50) = iVar3;
  *(int *)(iVar2 + 0x5c) = iVar5;
  *(int *)(iVar2 + 0x60) = iVar3;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = iVar2;
  }
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(int *)(iVar2 + 0x20) = param_1;
  *(int *)(param_1 + 0x24) = iVar2;
  pcVar4 = (char *)(param_1 + 0xd8);
  if ((*pcVar4 != '\0') || (*(int *)(param_1 + 0xd0) = iVar2, *pcVar4 != '\0')) {
    iVar3 = sub_08080398(1);
    *(int *)(param_1 + 0xd4) = iVar3;
    iVar5 = *(int *)(param_1 + 0x24);
    *(int *)(iVar3 + 0x20) = iVar5;
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
  }
  *pcVar4 = *pcVar4 + '\x01';
  return CONCAT44(in_lr,iVar2);
}

