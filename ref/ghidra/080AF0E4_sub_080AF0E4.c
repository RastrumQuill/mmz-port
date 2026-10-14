// sub_080AF0E4 at 0x080AF0E4 (thumb)

undefined4 sub_080AF0E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,(uint)*(byte *)(param_1 + 0x10) << 2);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x4c) + 0x800;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + 0xa00;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x800;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080AF170(param_1);
  return in_lr;
}

