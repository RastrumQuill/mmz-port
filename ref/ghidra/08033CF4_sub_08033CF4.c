// sub_08033CF4 at 0x08033CF4 (thumb)

undefined4 sub_08033CF4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(char *)(param_1 + 0xd8) = '`';
  sub_08029874(param_1,&DAT_082ad664,(int)*(char *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x4c) + 0x4000;
  *(int *)(param_1 + 0x4c) = iVar1;
  uVar2 = sub_08008360(iVar1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined *)(param_1 + 0xd1) = 0;
  *(undefined *)(param_1 + 0xd2) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0xffff;
  *(undefined2 *)(param_1 + 0xd6) = 0xffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08033DD8(param_1);
  return in_lr;
}

