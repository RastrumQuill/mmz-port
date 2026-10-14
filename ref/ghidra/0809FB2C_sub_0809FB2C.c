// sub_0809FB2C at 0x0809FB2C (thumb)

undefined4 sub_0809FB2C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_0809C6C4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x48;
  *(undefined **)(param_1 + 0x28) = &DAT_082b580c;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b57b8,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  bVar3 = *(char *)(param_1 + 0x10) == '\x02';
  *(bool *)(param_1 + 0x44) = bVar3;
  if (bVar3) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(int *)(param_1 + 0xc0) = *(int *)(iVar2 + 0x50) + 0x9000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0809F98C(param_1);
  return in_lr;
}

