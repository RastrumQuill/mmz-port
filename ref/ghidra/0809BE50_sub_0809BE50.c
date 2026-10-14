// sub_0809BE50 at 0x0809BE50 (thumb)

undefined4 sub_0809BE50(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08088120(param_1);
  iVar2 = *(int *)(iVar2 + 0x54);
  *(byte *)(param_1 + 0x44) = (byte)~(byte)((uint)iVar2 >> 0x18) >> 7;
  if (iVar2 < 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080033F0(param_1 + 0x6c,4);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xf0;
  *(undefined *)(param_1 + 0x1e) = 0xf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0809BEC4(param_1);
  return in_lr;
}

