// sub_080CA994 at 0x080CA994 (thumb)

undefined4 sub_080CA994(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_083490f8;
  *(undefined2 *)(param_1 + 0x26) = 0x2401;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083490bc,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x65000;
  *(int *)(param_1 + 0xb8) = 0x26000;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (uint)*(byte *)(param_1 + 0x11) * 0xa000;
  *(undefined2 *)(param_1 + 0xbe) = 0xffff;
  sub_080CA888(param_1,1,0);
  DAT_0202d00c = 0;
  DAT_0202d010 = 0;
  DAT_0202d014 = 0x3c0000;
  DAT_0202d018 = 0x280000;
  if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0) {
    *(undefined *)(param_1 + 0xc0) = 2;
    uVar1 = 4;
  }
  else {
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar1 = 5;
  }
  *(undefined *)(param_1 + 0xc1) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CA900(param_1);
  return in_lr;
}

