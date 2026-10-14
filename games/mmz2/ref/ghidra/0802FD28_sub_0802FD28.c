// sub_0802FD28 at 0x0802FD28 (thumb)

undefined4 sub_0802FD28(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  sub_08033960(param_1,5);
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 1;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_0801E9FC(param_1,0x28);
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 0xc) != 0) {
    *(byte *)(param_1 + 0x4c) = bVar1 >> 3 & 1;
    bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) >> 3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_0802FDEC(param_1);
  return in_lr;
}

