// sub_080BAC48 at 0x080BAC48 (thumb)

undefined4 sub_080BAC48(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        cVar1 = sub_080FE4D8(uVar3 * 2 >> 0x11,10);
        *(char *)(param_1 + 0x12) = cVar1 + '\x1a';
        sub_08017700(param_1,0x270c);
      }
      else {
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 7) + 0x14;
        sub_08017700(param_1,0x270d);
        *(undefined *)(param_1 + 0x25) = 0x19;
      }
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
    iVar4 = *(int *)(param_1 + 0x7c) + ((0x180 - *(int *)(param_1 + 0x7c)) * 0x28 >> 8);
    *(int *)(param_1 + 0x7c) = iVar4;
    *(short *)(param_1 + 0x50) = (short)iVar4;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x7c);
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(char *)(param_1 + 0x24) = (char)(uVar3 * 2 >> 0x11);
    iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0x12 >> 8);
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar4 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0x12 >> 8);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    sub_080177F4(param_1);
  }
  return in_lr;
}

