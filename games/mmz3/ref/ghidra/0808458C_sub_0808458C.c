// sub_0808458C at 0x0808458C (thumb)

undefined4 sub_0808458C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080843CC();
  if (cVar1 == '\0') {
    sub_0808447C(param_1);
    cVar1 = sub_08084408(param_1);
    if (cVar1 == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364aa4 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364abc + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  return in_lr;
}

