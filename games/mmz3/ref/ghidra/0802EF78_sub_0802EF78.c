// sub_0802EF78 at 0x0802EF78 (thumb)

undefined4 sub_0802EF78(int param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x124);
    bVar2 = 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x124);
    bVar2 = 0x20;
  }
  *(byte *)(param_1 + 0x124) = bVar1 | bVar2;
  pcVar3 = (char *)(param_1 + 0x129);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xa01) {
    sub_080177CC(param_1,0xa01,0,*pcVar3);
  }
  *pcVar3 = *(char *)(param_1 + 0x72);
  if (*(char *)(param_1 + 0x72) < '\x02') {
    sub_080177CC(param_1,0xa01,1,4);
    *pcVar3 = '\x04';
    *(undefined *)(param_1 + 0xed) = 2;
  }
  return in_lr;
}

