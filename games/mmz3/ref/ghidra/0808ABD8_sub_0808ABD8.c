// sub_0808ABD8 at 0x0808ABD8 (thumb)

undefined4 sub_0808ABD8(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xb4) = DAT_020302c4 + -0x4000;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x13) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar3;
  iVar2 = *(int *)(param_1 + 0x68) +
          ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x68)) * 8 >> 8);
  *(int *)(param_1 + 0x68) = iVar2;
  *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0xf;
  if ((*(char *)(param_1 + 0x13) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
    if ((((*(int *)(param_1 + 0xbc) == 0) ||
         ((*(int *)(param_1 + 0x2c) == 0 || (*(int *)(param_1 + 0x28) == 0)))) &&
        ((int)*(short *)(DAT_020305e8 + 8) - (int)*(short *)(DAT_020305e8 + 10) < 6)) &&
       (((DAT_02030108 & 0x42) == 0 &&
        ((((DAT_02030104 & 0x10) == 0 || (DAT_02002470 == 0x32da)) || (DAT_02002470 == 0)))))) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0x40;
    }
  }
  else if (cVar3 == '@') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

