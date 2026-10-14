// sub_0808241C at 0x0808241C (thumb)

undefined4 sub_0808241C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_0800561C(param_1 + 0x74,&DAT_082b2990);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  return in_lr;
}

