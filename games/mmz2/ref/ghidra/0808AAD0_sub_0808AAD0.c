// sub_0808AAD0 at 0x0808AAD0 (thumb)

undefined4 sub_0808AAD0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x12) == ' ') {
    local_18 = *(int *)(param_1 + 0x54) + 0x400;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = *(int *)(param_1 + 0x54) + -0x400;
    }
    local_14 = *(int *)(param_1 + 0x58) + 0x1300;
    iVar1 = sub_080EEF64((int)(short)((uint)(*(int *)(DAT_0202e130 + 0x54) - local_18) >> 8),
                         (int)(short)((uint)(*(int *)(DAT_0202e130 + 0x58) -
                                            (*(int *)(param_1 + 0x58) + 0x1b00)) >> 8));
    sub_080A91D8(param_1,&local_18,0x280,((uint)(iVar1 << 0x10) >> 0x18) + 0x80 & 0xff);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

