// sub_080A37E4 at 0x080A37E4 (thumb)

undefined4 sub_080A37E4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined uVar2;
  
  if ((*(char *)(param_1 + 0x10) == '\x01') &&
     (((*(uint *)(DAT_02022b20 + 0x10) & 0x200) == 0 ||
      ((*(uint *)(DAT_02022b20 + 0x18) & 0x200) != 0)))) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_0809C6C4(param_1);
  uVar2 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,3);
  sub_0809C980(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b5cf4,param_1 + 0x4c,0x60,uVar2);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x80a42d9;
  *(undefined *)(param_1 + 0xc5) = 9;
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5d2c,param_1 + 0x4c,0x60,uVar2);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0xd) = 9;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

