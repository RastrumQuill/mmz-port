// sub_0805ACE8 at 0x0805ACE8 (thumb)

undefined4 sub_0805ACE8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    iVar2 = sub_0805C370(param_1);
    iVar2 = (iVar2 + ((bVar1 >> 4 & 1) * -2 + 1) * 0x4000 + 0x7800) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar3 = *(int *)(param_1 + 0xb4) - (*(int *)(param_1 + 0x58) + -0x1000);
    *(int *)(param_1 + 0x60) = iVar3;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + iVar2;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + iVar3;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  iVar2 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 6,0x28);
  iVar3 = (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17));
  iVar2 = iVar3 * *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) - (iVar2 >> 8);
  iVar3 = iVar3 * *(int *)(param_1 + 0x60);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - (iVar3 >> 8);
  if (cVar4 == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

