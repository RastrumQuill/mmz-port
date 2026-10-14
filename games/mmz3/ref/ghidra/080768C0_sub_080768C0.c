// sub_080768C0 at 0x080768C0 (thumb)

undefined4 sub_080768C0(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x1000;
  sub_080B2484(1,&local_14);
  sub_0800471C(0x2a);
  if (*(char *)(param_1 + 0xb9) == '\0') {
    sub_080B7A3C(param_1,&local_14,&DAT_083639b4,3);
  }
  else {
    sub_080B7AC8(param_1,&local_14,&DAT_083639b4,3);
  }
  sub_08024FE4(3,param_1 + 0x54);
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

