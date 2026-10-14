// sub_0808B2E0 at 0x0808B2E0 (thumb)

undefined4 sub_0808B2E0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    sub_08017700(param_1,0xed00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == '\0') && (*(byte *)(param_1 + 0x13) < 2)) {
      sub_0808B110(*(undefined4 *)(param_1 + 100),*(byte *)(param_1 + 0x13) + 1);
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

