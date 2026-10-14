// sub_0802A03C at 0x0802A03C (thumb)

undefined4 sub_0802A03C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 0xc) != 0) {
    bVar1 = bVar1 >> 3;
    uVar2 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  if (*(char *)(param_1 + 0x215) == '\x02') {
    *(undefined *)(param_1 + 0x2b8) = 2;
  }
  else {
    *(undefined *)(param_1 + 0x2b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  sub_0801E9FC(param_1,0x30);
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) | 0x80;
  return in_lr;
}

