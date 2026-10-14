// sub_080CE004 at 0x080CE004 (thumb)

undefined4 sub_080CE004(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xbc);
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08863660);
    sub_0801CF00(param_1,0x9c18);
    iVar3 = 0x200;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = iVar3 * *(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  iVar2 = iVar3 * (short)(&DAT_08128c10)[bVar1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 >> 8);
  iVar3 = iVar3 + *(int *)(param_1 + 100);
  if (iVar3 < 0x80) {
    iVar3 = 0x80;
  }
  *(int *)(param_1 + 0xbc) = iVar3;
  if (iVar3 == 0x80) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

