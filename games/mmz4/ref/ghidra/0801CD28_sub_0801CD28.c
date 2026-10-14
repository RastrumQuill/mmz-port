// sub_0801CD28 at 0x0801CD28 (thumb)

undefined4 sub_0801CD28(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_080034A4(param_1 + 0x6c,&DAT_08c3c3e0);
  sub_08002D24(param_1 + 0x34,&DAT_08c1c3e0,param_1 + 0x54);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(param_1 + 0x4a);
  bVar2 = (byte)((*(byte *)(param_1 + 10) >> 4 & 1) << 4);
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xef | bVar2;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xcf | bVar2 | (byte)((*(byte *)(param_1 + 10) >> 5 & 1) << 5)
  ;
  *(undefined *)(param_1 + 0x1e) = 0xff;
  *(undefined *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xd8;
  return in_lr;
}

