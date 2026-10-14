// sub_080A2084 at 0x080A2084 (thumb)

undefined4 sub_080A2084(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x01') &&
     (((*(uint *)(DAT_02022b20 + 0x10) & 8) == 0 || ((*(uint *)(DAT_02022b20 + 0x18) & 8) != 0)))) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_0809C6C4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0809C930(param_1,0);
  }
  else {
    sub_0809C930(param_1,4);
  }
  sub_0809C980(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&UNK_082b5a8c + (uint)*(byte *)(param_1 + 0x10) * 0x1c,param_1 + 0x4c,
               1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

