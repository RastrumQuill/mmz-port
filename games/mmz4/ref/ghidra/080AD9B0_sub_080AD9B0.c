// sub_080AD9B0 at 0x080AD9B0 (thumb)

undefined4 sub_080AD9B0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CE54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x2f04);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x98) = 0x80adcd9;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
  *(undefined4 *)(param_1 + 100) = 0xfffffff0;
  *(undefined4 *)(param_1 + 0x60) = 0x280;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffc0;
  *(undefined2 *)(param_1 + 0x50) = 0x80;
  *(undefined2 *)(param_1 + 0x52) = 0x80;
  *(undefined *)(param_1 + 0x12) = 0x80;
  *(undefined2 *)(param_1 + 0xbc) = 600;
  *(undefined2 *)(param_1 + 0xbe) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080ADA54(param_1);
  return in_lr;
}

