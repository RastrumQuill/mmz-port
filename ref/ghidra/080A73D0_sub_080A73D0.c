// sub_080A73D0 at 0x080A73D0 (thumb)

undefined4 sub_080A73D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b6228)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C6C4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_080055FC(param_1 + 0x74,&DAT_082b616c + (uint)*(byte *)(param_1 + 0x10) * 0x1c,param_1 + 0x4c,
               0xc);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x80a763d;
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = sub_08005428(DAT_02023118);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 9) = 0x20;
      *(undefined4 *)(iVar2 + 0x14) = 0x80a73d1;
      *(undefined2 *)(iVar2 + 0x1c) = DAT_020231b0;
      *(undefined *)(iVar2 + 0x1e) = DAT_02023140;
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined *)(iVar2 + 0x10) = 1;
      *(int *)(iVar2 + 0x24) = param_1;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
      *(undefined *)(iVar2 + 200) = 0;
      *(undefined *)(iVar2 + 0xc9) = 4;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
    *(undefined **)(param_1 + 0x28) = &DAT_082b622c;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x20) = iVar2;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  }
  sub_080A74EC(param_1);
  return in_lr;
}

