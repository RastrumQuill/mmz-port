// sub_080CE0B4 at 0x080CE0B4 (thumb)

undefined4 sub_080CE0B4(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  uVar1 = *(undefined *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08863678);
    if (*(char *)(param_1 + 0xb6) != '\0') {
      sub_0801CF00(param_1,0x9c19);
      *(char *)(param_1 + 0xb6) = '\0';
    }
    iVar4 = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  uVar2 = sub_0810CDC8(param_1 + 0x54,DAT_0202dbf0 + 0x54,uVar1,2);
  iVar3 = *(short *)((int)&DAT_08128c10 + (uVar2 * 0x1000000 + 0x40000000 >> 0x17)) * iVar4;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar3 = (short)(&DAT_08128c10)[uVar2 & 0xff] * iVar4;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  *(int *)(param_1 + 0xbc) = iVar4;
  *(char *)(param_1 + 0xb4) = (char)uVar2;
  return in_lr;
}

