// sub_0808D1F8 at 0x0808D1F8 (thumb)

undefined4 sub_0808D1F8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\b') || ((DAT_02030108 & 2) == 0)) {
    cVar1 = sub_0808CEB8(param_1);
    if (cVar1 == '\0') {
      sub_0808D060(param_1);
      cVar1 = sub_0808CF30(param_1);
      if (cVar1 == '\0') {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365910 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365930 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

