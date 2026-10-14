// sub_0809CBCC at 0x0809CBCC (thumb)

undefined4 sub_0809CBCC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x270b);
      if (*(char *)(param_1 + 0x10) == '\0') {
        uVar3 = 0xfffffdc0;
      }
      else {
        uVar3 = 0x240;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0x12) = 0x78;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar1;
    cVar1 = sub_080FE4D8(cVar1,0x14);
    if ((cVar1 == '\0') && (DAT_0202e48c < iVar4 + -0x800)) {
      sub_080BA46C(param_1 + 0x54);
    }
    if (*(byte *)(param_1 + 0x12) < 0x1e) {
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    sub_080177F4(param_1);
  }
  return in_lr;
}

