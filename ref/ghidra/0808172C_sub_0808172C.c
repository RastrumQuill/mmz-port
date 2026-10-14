// sub_0808172C at 0x0808172C (thumb)

undefined4 sub_0808172C(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1200;
    uVar2 = 0xfffc;
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1200;
    uVar2 = 4;
  }
  *(undefined2 *)(param_1 + 0xc0) = uVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x300;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 9;
  *(undefined *)(param_1 + 0x11) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b28dc,param_1 + 0x4c,0x18);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080810B8(param_1);
  return in_lr;
}

