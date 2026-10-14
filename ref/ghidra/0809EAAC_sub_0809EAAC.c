// sub_0809EAAC at 0x0809EAAC (thumb)

undefined4 sub_0809EAAC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_0809C6C4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b559c,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x28) = &DAT_082b56b0;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0809E9FC(param_1);
  return in_lr;
}

