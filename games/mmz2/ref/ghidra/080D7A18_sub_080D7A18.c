// sub_080D7A18 at 0x080D7A18 (thumb)

undefined4 sub_080D7A18(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (DAT_0202e144 == '\0') {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4 & 1;
    *(byte *)(param_1 + 0xd) = bVar1;
    sub_080378B4(*(int *)(param_1 + 0x28),param_1 + 0x54,0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xc5) = 0;
    *(undefined2 *)(param_1 + 0xc6) = 900;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0x9004);
    sub_080D7AAC(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
    *(byte *)(param_1 + 0xd) = bVar1;
  }
  return in_lr;
}

