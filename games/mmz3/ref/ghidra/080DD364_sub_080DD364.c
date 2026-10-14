// sub_080DD364 at 0x080DD364 (thumb)

undefined4 sub_080DD364(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 0x7f) + 0x40;
    uVar2 = 1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_08017700(param_1,0xd900);
    uVar2 = 0;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  return in_lr;
}

