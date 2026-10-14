// sub_080900D4 at 0x080900D4 (thumb)

undefined4 sub_080900D4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xb7);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885cb50);
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) << 6;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[bVar1] << 6;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar2 = -0x400;
  }
  else {
    iVar2 = 0x400;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0x5c) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x60) + -0x200;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xb5) = 1;
  }
  return in_lr;
}

