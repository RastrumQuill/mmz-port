// sub_080BC8C0 at 0x080BC8C0 (thumb)

undefined4 sub_080BC8C0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) &&
     (iVar4 = *(int *)(param_1 + 0x2c), (*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(undefined *)(iVar4 + 0xb8) = 1;
    sVar1 = (&DAT_08128c10)[uVar2 * 2 >> 0x11 & 0xf | 0x50];
    iVar3 = sVar1 * 3;
    *(int *)(iVar4 + 0x5c) = iVar3;
    *(int *)(iVar4 + 0x60) = iVar3;
    iVar3 = sVar1 * -0x300;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar4 + 0x60) = iVar3 >> 8;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      *(int *)(iVar4 + 0x5c) = iVar3 >> 8;
    }
    iVar4 = *(int *)(iVar4 + 0x28);
    if (*(int *)(iVar4 + 0xe08) == 1) {
      *(int *)(iVar4 + 0xdd4) = *(int *)(iVar4 + 0xdd4) + 10;
      sub_08002B10(0x1a4);
    }
  }
  return in_lr;
}

