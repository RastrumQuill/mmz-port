// sub_0806F6A8 at 0x0806F6A8 (thumb)

undefined4 sub_0806F6A8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_080055FC(param_1 + 0x74,&DAT_082b114c,param_1 + 0x4c,0x20);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x806fa7d;
  *(undefined *)(param_1 + 0xd) = (&DAT_082b11d8)[*(byte *)(param_1 + 0x10)];
  if (*(byte *)(param_1 + 0x10) != 2) {
    uVar1 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    iVar2 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),uVar1);
    piVar3 = (int *)(param_1 + 0xb8);
    *piVar3 = iVar2;
    iVar2 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),uVar1);
    *piVar3 = *piVar3 + iVar2 >> 1;
    *(undefined *)(param_1 + 0x12) = 0xc0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x50) + 0x2400;
    *(undefined *)(param_1 + 0xc5) = 0;
    iVar2 = sub_08005458(DAT_02022e98);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 9) = 0x38;
      *(undefined4 *)(iVar2 + 0x14) = 0x806f6a9;
      *(undefined2 *)(iVar2 + 0x1c) = DAT_02022f10;
      *(undefined *)(iVar2 + 0x1e) = DAT_02022f68;
      *(undefined *)(iVar2 + 0x10) = 2;
      *(int *)(iVar2 + 0x20) = param_1;
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  sub_0806F7A0(param_1);
  return in_lr;
}

