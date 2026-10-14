// sub_0809AA58 at 0x0809AA58 (thumb)

undefined4 sub_0809AA58(int param_1)

{
  undefined4 in_lr;
  
  sub_080C5EBC(param_1 + 0x54,0,*(char *)(param_1 + 0x12) + '\x03',0x20);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

