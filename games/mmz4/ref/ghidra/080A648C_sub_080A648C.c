// sub_080A648C at 0x080A648C (thumb)

undefined4 sub_080A648C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    iVar1 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar3 = *(int *)(DAT_0202dbf0 + 0x58) + -0x1800;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 0xbc);
  }
  iVar1 = sub_081284E0((iVar1 - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                       (iVar3 - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
  uVar2 = (uint)(iVar1 << 0x10) >> 0x18;
  iVar1 = (int)*(short *)((int)&DAT_08128c10 + ((uVar2 + 0x40) * 0x1000000 >> 0x17));
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *(int *)(param_1 + 100) = iVar1 >> 3;
  iVar1 = (int)(short)(&DAT_08128c10)[uVar2];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *(int *)(param_1 + 0x68) = iVar1 >> 3;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return in_lr;
}

