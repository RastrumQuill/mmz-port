// sub_080DD374 at 0x080DD374 (thumb)

undefined4 sub_080DD374(int param_1)

{
  char cVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_lr;
  
  cVar1 = sub_080DD468();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DD3F8(param_1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12);
    sVar2 = sub_080DD520(param_1);
    if (sVar2 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else {
      cVar3 = *(char *)(param_1 + 0x13);
      if (*(char *)(param_1 + 0x12) != cVar1) {
        cVar3 = '\0';
      }
      bVar4 = cVar3 + 0x1fU & 0x1f;
      *(byte *)(param_1 + 0x13) = bVar4;
      if (bVar4 < 8) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_080DD6D8(param_1);
        sub_080128D4(param_1);
      }
    }
  }
  return in_lr;
}

