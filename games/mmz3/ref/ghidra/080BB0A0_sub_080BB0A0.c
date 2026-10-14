// sub_080BB0A0 at 0x080BB0A0 (thumb)

undefined4 sub_080BB0A0(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      cVar1 = sub_080FE4D8(uVar3 * 2 >> 0x11,6);
      *(char *)(param_1 + 0x12) = cVar1 + '\x12';
      sub_08017700(param_1,0x270c);
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar4 = *(int *)(param_1 + 0x60) + ((-0x100 - *(int *)(param_1 + 0x60)) * 0x10 >> 8);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sub_080177F4(param_1);
  }
  return in_lr;
}

