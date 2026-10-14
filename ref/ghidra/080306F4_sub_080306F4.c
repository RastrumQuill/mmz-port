// sub_080306F4 at 0x080306F4 (thumb)

undefined4 sub_080306F4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x12) = 0x80;
    if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + 0x7800) {
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_080297C0(param_1);
  pbVar4 = (byte *)(param_1 + 0xc9);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar4] * 4 + 0x2800
  ;
  *pbVar4 = *pbVar4 + 2;
  iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  if (iVar3 < 0) {
    iVar3 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  }
  if (iVar3 < 0x4000) {
    *(undefined *)(param_1 + 0xd) = 10;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

