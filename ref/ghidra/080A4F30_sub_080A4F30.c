// sub_080A4F30 at 0x080A4F30 (thumb)

undefined4 sub_080A4F30(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,1);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  bVar2 = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 10) = bVar2 | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5e84,param_1 + 0x4c,8);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else {
    uVar1 = sub_080A4840(param_1,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0xc00,
                         *(char *)(param_1 + 0x11) + -1);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x12) = 0x10;
  return in_lr;
}

