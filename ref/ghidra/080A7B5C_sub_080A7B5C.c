// sub_080A7B5C at 0x080A7B5C (thumb)

undefined4 sub_080A7B5C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = sub_08005458(DAT_02023118);
    if (iVar1 == 0) {
      return in_lr;
    }
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined *)(iVar1 + 9) = 0x21;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a7b5d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231b2;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023141;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(int *)(iVar1 + 0x20) = param_1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0809C6C4(param_1);
    sub_0809C930(param_1,0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b6294,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
    *(undefined **)(param_1 + 0x28) = &DAT_082b62cc;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) + 0x2000U < 0x4001) &&
     ((*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + 0x2000U < 0x4001)) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080A7C84(param_1);
  return in_lr;
}

