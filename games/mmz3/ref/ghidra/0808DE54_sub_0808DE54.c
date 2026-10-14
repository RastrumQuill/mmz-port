// sub_0808DE54 at 0x0808DE54 (thumb)

undefined4 sub_0808DE54(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x1000;
  sub_080B2484(1,&local_18);
  sub_0800471C(0x2a);
  if ((*(char *)(param_1 + 0xbb) == '\0') && (uVar1 = (uint)*(byte *)(param_1 + 0xb9), uVar1 < 6)) {
    do {
      sub_080C3D1C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),uVar1 & 0xff,
                   *(byte *)(param_1 + 10) >> 4 & 1);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 6);
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (*(char *)(param_1 + 0x10) != '\t') {
      sub_08024FE4(0,param_1 + 0x54);
    }
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
    sub_080250C4(param_1,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

