// sub_0808511C at 0x0808511C (thumb)

undefined4 sub_0808511C(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x720b);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0xb6);
    if ((cVar1 == '\0') || (cVar1 = cVar1 + -1, *(char *)(param_1 + 0xb6) = cVar1, cVar1 == '\0')) {
      uVar2 = 2;
    }
    else {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 1) == 0) {
        uVar2 = 0xf;
      }
      else {
        uVar2 = 0xb;
      }
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

