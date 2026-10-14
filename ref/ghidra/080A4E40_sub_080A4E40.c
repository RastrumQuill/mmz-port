// sub_080A4E40 at 0x080A4E40 (thumb)

undefined4 sub_080A4E40(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  uVar1 = sub_080A4840(param_1,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0xc00,5);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x12) = 0x10;
  return in_lr;
}

