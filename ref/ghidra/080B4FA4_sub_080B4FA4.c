// sub_080B4FA4 at 0x080B4FA4 (thumb)

undefined4 sub_080B4FA4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_080033DC(param_1 + 0x6c,&DAT_085b8004);
  sub_08001FCC(param_1 + 0x2c,&DAT_08593004,param_1 + 0x4c);
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 4 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(ushort *)(param_1 + 0x42) = (ushort)(&DAT_0853000a)[(uint)bVar1 * 10] >> 6;
  cVar2 = (&DAT_08530017)[(uint)bVar1 * 0x14];
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
  *(ushort *)(param_1 + 0x1c) = (ushort)bVar1;
  *(char *)(param_1 + 0x1e) = cVar2;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 8;
  return in_lr;
}

