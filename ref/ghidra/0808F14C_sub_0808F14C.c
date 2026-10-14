// sub_0808F14C at 0x0808F14C (thumb)

undefined4 sub_0808F14C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    sub_0808EB84(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),3);
  }
  else {
    sub_0808EB84(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

