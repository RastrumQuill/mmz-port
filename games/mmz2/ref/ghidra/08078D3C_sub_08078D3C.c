// sub_08078D3C at 0x08078D3C (thumb)

undefined4 sub_08078D3C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + 1;
  sub_080128D4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    sVar1 = sub_08008CFC(iVar2,*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      sub_08006E08(param_1 + 0x74,&DAT_0833fec0 + (uint)*(byte *)(param_1 + 0x11) * 0x18);
    }
  }
  else if (DAT_0202e130 == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0833fe90);
    iVar2 = *(int *)(DAT_0202e130 + 0x58);
    *(int *)(param_1 + 0xb4) = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0xb8) = iVar2 - *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xbc) = 1;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

