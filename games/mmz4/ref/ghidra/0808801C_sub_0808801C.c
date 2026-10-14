// sub_0808801C at 0x0808801C (thumb)

undefined4 sub_0808801C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    sub_08005784(param_1 + 0x74,&DAT_0885baf8);
    sub_0801CF00(param_1,0x1d10);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * -2 + 1) * 0x240;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = sub_08088B14(param_1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

