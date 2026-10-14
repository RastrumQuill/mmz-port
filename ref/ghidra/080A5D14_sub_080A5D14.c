// sub_080A5D14 at 0x080A5D14 (thumb)

undefined4 sub_080A5D14(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x12) == '\b') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x28;
    *(undefined **)(param_1 + 0x28) = &DAT_082b5fbc;
    sub_08095E50(param_1 + 0x4c,0,1,0);
    sub_08095E50(param_1 + 0x4c,0,0,1);
    DAT_02022ae3 = DAT_02022ae3 | 8;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (8 < bVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x40;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x40;
  }
  if (bVar1 == 0x30) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  else if ((bVar1 & 7) == 0) {
    if ((DAT_02022ae3 & 4) == 0) {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      local_10 = *(int *)(param_1 + 0x50) + (8 - (uVar2 * 2 >> 0x11 & 0xf)) * 0x100 + -0x400;
      local_14 = *(int *)(param_1 + 0x4c) + 0x1000;
      sub_0808827C(3,&local_14);
    }
    if ((DAT_02022ae3 & 0x10) == 0) {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      local_10 = *(int *)(param_1 + 0x50) + (8 - (uVar2 * 2 >> 0x11 & 0xf)) * 0x100 + -0x400;
      local_14 = *(int *)(param_1 + 0x4c) + -0x1000;
      sub_0808827C(3,&local_14);
    }
  }
  return in_lr;
}

