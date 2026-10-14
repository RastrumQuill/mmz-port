// sub_080D74AC at 0x080D74AC (thumb)

undefined4 sub_080D74AC(int param_1)

{
  undefined4 in_lr;
  
  sub_080378B4(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,0);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 200) = 0x708;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_08006DE4(param_1 + 0x74,&DAT_0834b42c,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80d7991;
  sub_080D7948(param_1);
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0x9004);
  sub_080D759C(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  return in_lr;
}

