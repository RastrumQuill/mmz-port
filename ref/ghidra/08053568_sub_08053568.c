// sub_08053568 at 0x08053568 (thumb)

undefined4 sub_08053568(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_080055FC(param_1 + 0x74,&DAT_082af660,param_1 + 0x4c,4);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x805389d;
  sub_080033F0(param_1 + 0x6c,0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  sub_080535F4(param_1);
  return in_lr;
}

