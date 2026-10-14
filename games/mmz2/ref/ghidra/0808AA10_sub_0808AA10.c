// sub_0808AA10 at 0x0808AA10 (thumb)

undefined4 sub_0808AA10(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x12) == '\x10') {
    local_18 = *(int *)(param_1 + 0x54) + -0x600;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = *(int *)(param_1 + 0x54) + 0x600;
    }
    local_14 = *(int *)(param_1 + 0x58) + 0x1300;
    iVar1 = sub_080EEF64((*(int *)(DAT_0202e130 + 0x54) - local_18) * 0x1000 >> 0x10,
                         (*(int *)(DAT_0202e130 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1b00)) *
                         0x1000 >> 0x10);
    sub_08098414(&local_18,0x180,((uint)(iVar1 << 0x10) >> 0x18) + 0x80 & 0xff);
    sub_080032EC(0x2c);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

