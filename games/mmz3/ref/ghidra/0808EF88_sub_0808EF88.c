// sub_0808EF88 at 0x0808EF88 (thumb)

undefined4 sub_0808EF88(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(int *)(param_1 + 0xb4) == 0) && (*(char *)(param_1 + 0x10) != '\x02')) &&
      (*(char *)(param_1 + 0xd) != '\x05')) &&
     ((*(char *)(param_1 + 0xd) != '\x06' && ((*(uint *)(param_1 + 0x8c) & 1) != 0)))) {
    iVar1 = sub_080253D8(0,param_1,&DAT_08365d5c);
    *(int *)(param_1 + 0xb4) = iVar1;
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

