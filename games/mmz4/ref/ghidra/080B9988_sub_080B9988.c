// sub_080B9988 at 0x080B9988 (thumb)

undefined4 sub_080B9988(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_080B9A4C();
  iVar2 = *(short *)((int)&DAT_08128c10 + (((uVar1 & 0xff) + 0x40) * 0x1000000 >> 0x17)) * -0x200;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  iVar2 = (short)(&DAT_08128c10)[uVar1 & 0xff] * -0x200;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 >> 8);
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

