// sub_0805E428 at 0x0805E428 (thumb)

undefined4 sub_0805E428(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0;
        sub_0800471C(0xee);
        sub_080ADD30(param_1,7);
        sub_08017700(param_1,0x1400);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10300) {
        iVar3 = *(int *)(param_1 + 0x54) + -0x3000;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar3 = *(int *)(param_1 + 0x54) + 0x3000;
        }
        sub_0808B110(iVar3,0);
        sub_080B32B0(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_0801ACF8(3,param_1 + 0x54);
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_080C3610(param_1);
    sub_080C3668(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

