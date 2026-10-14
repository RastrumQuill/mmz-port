// sub_080CE164 at 0x080CE164 (thumb)

undefined4 sub_080CE164(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08863678);
    sub_0801CF00(param_1,0x9c1a);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  pcVar3 = (char *)(param_1 + 0xb5);
  if (*pcVar3 != '\0') {
    *pcVar3 = *pcVar3 + -1;
  }
  iVar2 = *(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) * iVar4;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  iVar2 = iVar4 * (short)(&DAT_08128c10)[bVar1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 >> 8);
  *(int *)(param_1 + 0xbc) = iVar4;
  *(byte *)(param_1 + 0xb4) = bVar1;
  if (*pcVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

