// sub_0808A054 at 0x0808A054 (thumb)

undefined4 sub_0808A054(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6d00);
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_08365194);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  return in_lr;
}

