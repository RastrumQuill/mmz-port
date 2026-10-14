// sub_0804A508 at 0x0804A508 (thumb)

undefined4 sub_0804A508(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0xa710);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0xbe) == '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa70f);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x71) == '\x05') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 1;
    sub_0800471C(0x5d);
    iVar2 = *(int *)(param_1 + 0x54) + -0x3700;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = *(int *)(param_1 + 0x54) + 0x3700;
    }
    sub_080A03B4(param_1,iVar2,*(int *)(param_1 + 0x58) + -0x3200,*(byte *)(param_1 + 10) >> 4 & 1,1
                );
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) & 0xfe;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

