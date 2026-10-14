// sub_080B3084 at 0x080B3084 (thumb)

undefined4 sub_080B3084(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar1 = *(int *)(param_1 + 0xb8) + 0x1600;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xb8) + -0x1600;
    }
    *(int *)(param_1 + 0xc0) = iVar1;
    iVar1 = sub_081284E0((*(int *)(*(int *)(param_1 + 0x2c) + 0x54) - *(int *)(param_1 + 0x54)) *
                         0x100 >> 0x10,
                         (*(int *)(*(int *)(param_1 + 0x2c) + 0x58) -
                         (*(int *)(param_1 + 0x58) + 0x800)) * 0x100 >> 0x10);
    uVar2 = (uint)(iVar1 << 0x10) >> 0x18;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((uVar2 + 0x40) * 0x1000000 >> 0x17));
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[uVar2];
    *(undefined *)(param_1 + 0xb7) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(iVar4 + 0x54) - iVar1 >> 8;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 4) {
    iVar1 = *(int *)(iVar4 + 0x58) - (iVar3 + 0x800) >> 8;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 4) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54);
      *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x800;
      *(undefined *)(iVar4 + 0xb5) = 1;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

