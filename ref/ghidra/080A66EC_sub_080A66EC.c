// sub_080A66EC at 0x080A66EC (thumb)

undefined4 sub_080A66EC(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b604c,param_1 + 0x4c,0x20);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  bVar4 = *(char *)(param_1 + 0x10) == '\x04';
  *(bool *)(param_1 + 0x44) = bVar4;
  if (bVar4) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x10) == '\x04') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x500;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar2 = &DAT_082b60b0;
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x200;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar2 = &DAT_082b60a0;
  }
  *(undefined **)(param_1 + 0x28) = puVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar3 + 0x100;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

