// sub_0802C278 at 0x0802C278 (thumb)

undefined4 sub_0802C278(int param_1)

{
  undefined4 in_lr;
  
  DAT_020301a8 = DAT_020301a8 & 0xfffe | 8;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_0800471C(10);
  if ((*(byte *)(param_1 + 10) >> 4 & 1) == *(byte *)(param_1 + 0x118)) {
    sub_08017700(param_1,0x3100);
  }
  else {
    sub_08017700(param_1,0x3200);
  }
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0802C2F0(param_1);
  return in_lr;
}

