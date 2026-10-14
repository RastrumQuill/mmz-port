// sub_0808B268 at 0x0808B268 (thumb)

undefined4 sub_0808B268(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0808B1C0();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365508 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836550c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

