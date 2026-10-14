// sub_080175BC at 0x080175BC (thumb)

undefined4 sub_080175BC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_080050B0(param_1 + 0x6c,&DAT_085d3140);
  sub_080049A0(param_1 + 0x34,&DAT_085c0c6c,param_1 + 0x54);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(param_1 + 0x4a);
  bVar2 = (byte)((*(byte *)(param_1 + 10) >> 4 & 1) << 4);
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xef | bVar2;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xcf | bVar2 | (byte)((*(byte *)(param_1 + 10) >> 5 & 1) << 5)
  ;
  *(undefined *)(param_1 + 0x1e) = 0xff;
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xd9 | 1;
  return in_lr;
}

