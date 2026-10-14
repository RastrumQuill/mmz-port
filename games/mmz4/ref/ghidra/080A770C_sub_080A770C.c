// sub_080A770C at 0x080A770C (thumb)

undefined4 sub_080A770C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A7798(param_1);
  }
  else {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      iVar2 = FUN_081288bc((0x50 - (uint)*(byte *)(param_1 + 0x12)) * 0x40,0x50);
      iVar2 = (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17));
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + ((bVar1 >> 4 & 1) * 2 + -1) * -6 * iVar2
      ;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar2 * 0xc;
    }
  }
  return in_lr;
}

