// sub_080DDD9C at 0x080DDD9C (thumb)

undefined4 sub_080DDD9C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((((*(uint *)(param_1 + 0x8c) & 4) != 0) && (*(char *)(DAT_0202f5c0 + 0xc4) != '\x01')) ||
      (sVar1 = sub_08008FEC(*(int *)(param_1 + 0x54) + 0x1100,*(int *)(param_1 + 0x58) + 1),
      sVar1 == 0)) ||
     (sVar1 = sub_08008FEC(*(int *)(param_1 + 0x54) + -0x1100,*(int *)(param_1 + 0x58) + 1),
     sVar1 == 0)) {
    iVar2 = sub_0800710C(DAT_02030630);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x1e;
      *(undefined *)(iVar2 + 9) = 0x2c;
      *(undefined4 *)(iVar2 + 0x14) = 0x80ddcc9;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined *)(iVar2 + 0x10) = 1;
      *(undefined *)(iVar2 + 0x11) = 0;
      *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x800;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080DDE88(param_1);
  }
  return in_lr;
}

