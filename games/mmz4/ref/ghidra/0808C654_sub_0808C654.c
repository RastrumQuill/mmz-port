// sub_0808C654 at 0x0808C654 (thumb)

undefined4 sub_0808C654(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x2c);
    uVar1 = (uint)*(byte *)(param_1 + 0xb4);
    local_10 = *(int *)(param_1 + 0x54) +
               *(short *)((int)&DAT_08128c10 + ((uVar1 + 0x40) * 0x1000000 >> 0x17)) * 0x14;
    local_c = *(int *)(param_1 + 0x58) + (short)(&DAT_08128c10)[uVar1] * 0x14;
    sub_080BD0F0(&local_10,0x200,uVar1 + 0x80 & 0xff);
    sub_0801CF00(param_1,0x2401);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

