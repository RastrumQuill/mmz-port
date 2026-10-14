// sub_080B0B18 at 0x080B0B18 (thumb)

undefined4 sub_080B0B18(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xb40f);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x5c) = iVar1 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x60) = iVar2 - *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801D134(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sub_080B0C48(param_1);
  iVar1 = FUN_081288bc((0x60 - (uint)*(byte *)(param_1 + 0x12)) * 0x40,0x60);
  iVar2 = (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar1 << 0x18) >> 0x17));
  iVar1 = iVar2 * *(int *)(param_1 + 0x5c);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + (iVar1 >> 8);
  iVar2 = iVar2 * *(int *)(param_1 + 0x60);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (iVar2 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

