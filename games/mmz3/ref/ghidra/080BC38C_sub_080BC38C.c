// sub_080BC38C at 0x080BC38C (thumb)

undefined4 sub_080BC38C(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08017700(param_1,0x3001);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x60) + 3;
  *(int *)(param_1 + 0x60) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  cVar1 = *(char *)(param_1 + 0x12);
  bVar3 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  bVar2 = cVar1 - 1;
  if (bVar2 < 8) {
    if ((bVar3 & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
LAB_080bc408:
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    if (0xf < bVar2) goto LAB_080bc410;
    if ((bVar3 & 1) != 0) goto LAB_080bc408;
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_080bc410:
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

