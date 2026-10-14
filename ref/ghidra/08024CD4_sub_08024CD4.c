// sub_08024CD4 at 0x08024CD4 (thumb)

undefined4 sub_08024CD4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018BE8(param_1,0x23);
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if ((bVar1 & 0xc) != 0) {
    bVar1 = bVar1 >> 3;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  *(undefined *)(param_1 + 0x11f) = 0;
  *(undefined *)(param_1 + 0x120) = 0;
  return in_lr;
}

