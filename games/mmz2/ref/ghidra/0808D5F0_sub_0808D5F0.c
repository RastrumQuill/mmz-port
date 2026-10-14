// sub_0808D5F0 at 0x0808D5F0 (thumb)

undefined4 sub_0808D5F0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08012580(param_1);
    *(undefined *)(param_1 + 0x24) = 0;
    sub_080127E4(param_1,0x7505);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  return in_lr;
}

