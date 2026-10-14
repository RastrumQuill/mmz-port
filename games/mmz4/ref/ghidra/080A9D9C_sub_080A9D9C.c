// sub_080A9D9C at 0x080A9D9C (thumb)

undefined4 sub_080A9D9C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080A9818(param_1);
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) + 0x9a05);
    iVar2 = sub_081284E0((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                         ((*(int *)(DAT_0202dbf0 + 0x58) + 0x1400) - *(int *)(param_1 + 0x58)) *
                         0x100 >> 0x10);
    uVar4 = (uint)(iVar2 << 0x10) >> 0x18;
    iVar3 = (int)*(short *)((int)&DAT_08128c10 + ((uVar4 + 0x40) * 0x1000000 >> 0x17));
    iVar2 = iVar3 * -0x780;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    sVar1 = (&DAT_08128c10)[uVar4];
    iVar2 = sVar1 * -0x780;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar2 >> 8;
    iVar3 = iVar3 * -0xf;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar3 >> 8;
    iVar2 = sVar1 * -0xf;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x68) = iVar2 >> 8;
    sub_08005784(param_1 + 0x74,&DAT_0885f528);
    *(undefined4 *)(param_1 + 0x98) = 0x80a9649;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68) + 0x40;
  sVar1 = sub_08007C7C(iVar2,iVar3 + -0x1000);
  if ((sVar1 != 0) ||
     (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2800),
     sVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xb7) = 0;
  }
  return in_lr;
}

