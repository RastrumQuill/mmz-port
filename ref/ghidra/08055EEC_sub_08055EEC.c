// sub_08055EEC at 0x08055EEC (thumb)

undefined4 sub_08055EEC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082afad2)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08048A54(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1 + -0x700;
    iVar2 = sub_08005458(DAT_02022e98);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 9) = 0x15;
      *(undefined4 *)(iVar2 + 0x14) = 0x8055eed;
      *(undefined2 *)(iVar2 + 0x1c) = DAT_02022eca;
      *(undefined *)(iVar2 + 0x1e) = DAT_02022f45;
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar2 + 0x50) = iVar1 + -0x1000;
      *(undefined *)(iVar2 + 0x10) = 2;
      *(int *)(iVar2 + 0x20) = param_1;
      *(undefined4 *)(iVar2 + 0xb8) = 0;
    }
    iVar3 = sub_08005458(DAT_02022e98);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 9) = 0x15;
      *(undefined4 *)(iVar3 + 0x14) = 0x8055eed;
      *(undefined2 *)(iVar3 + 0x1c) = DAT_02022eca;
      *(undefined *)(iVar3 + 0x1e) = DAT_02022f45;
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar3 + 0x50) = iVar1 + -0x1000;
      *(undefined *)(iVar3 + 0x10) = 5;
      *(int *)(iVar3 + 0x20) = param_1;
    }
    iVar4 = sub_08005458(DAT_02022e98);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 9) = 0x15;
      *(undefined4 *)(iVar4 + 0x14) = 0x8055eed;
      *(undefined2 *)(iVar4 + 0x1c) = DAT_02022eca;
      *(undefined *)(iVar4 + 0x1e) = DAT_02022f45;
      *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar4 + 0x50) = iVar1 + -0x1000;
      *(undefined *)(iVar4 + 0x10) = 1;
      *(int *)(iVar4 + 0x20) = param_1;
      *(int *)(iVar4 + 0x24) = iVar3;
      *(int *)(iVar4 + 0x5c) = iVar2;
    }
    iVar3 = sub_08005458(DAT_02022e98);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 9) = 0x15;
      *(undefined4 *)(iVar3 + 0x14) = 0x8055eed;
      *(undefined2 *)(iVar3 + 0x1c) = DAT_02022eca;
      *(undefined *)(iVar3 + 0x1e) = DAT_02022f45;
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar3 + 0x50) = iVar1 + -0x1c00;
      *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar3 + 0x60) = iVar1 + -0x1c00;
      *(undefined *)(iVar3 + 0x10) = 4;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(int *)(iVar3 + 0xbc) = iVar2;
    }
    iVar4 = sub_08005458(DAT_02022e98);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 9) = 0x15;
      *(undefined4 *)(iVar4 + 0x14) = 0x8055eed;
      *(undefined2 *)(iVar4 + 0x1c) = DAT_02022eca;
      *(undefined *)(iVar4 + 0x1e) = DAT_02022f45;
      *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar4 + 0x50) = iVar1 + -0x2c00;
      *(undefined4 *)(iVar4 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(param_1 + 0x50);
      *(undefined *)(iVar4 + 0x10) = 3;
      *(int *)(iVar4 + 0x20) = param_1;
      *(int *)(iVar3 + 0xc0) = iVar4;
      *(int *)(iVar3 + 0x20) = iVar4;
      *(int *)(iVar4 + 0x24) = iVar3;
      *(int *)(iVar4 + 0xbc) = iVar2;
    }
    *(int *)(param_1 + 0xc4) = iVar2;
  }
  sub_080560DC(param_1);
  return in_lr;
}

