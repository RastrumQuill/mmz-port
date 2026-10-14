// sub_08080354 at 0x08080354 (thumb)

undefined4 sub_08080354(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0x1000;
  sub_080B2484(1,&local_10);
  sub_0800471C(0x56);
  sub_080BEFF8(local_10,local_c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xcb);
  *pcVar1 = *pcVar1 + -1;
  return in_lr;
}

