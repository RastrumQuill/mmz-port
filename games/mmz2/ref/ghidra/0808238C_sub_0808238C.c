// sub_0808238C at 0x0808238C (thumb)

undefined4 sub_0808238C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  sub_08012580();
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  sub_080127E4(param_1,0x6e00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083410e8,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80840e5;
  *(undefined4 *)(param_1 + 0x9c) = 0x8084111;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined *)(param_1 + 0xbd) = 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xbd) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  else if (bVar1 == 2) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x68) = DAT_0202d004;
    *(undefined *)(param_1 + 0xbd) = 0;
  }
  sub_080824D4(param_1);
  return in_lr;
}

