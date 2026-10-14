// sub_0802E6DC at 0x0802E6DC (thumb)

undefined4 sub_0802E6DC(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar2 = *(byte *)(param_1 + 0x124);
    bVar3 = 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x124);
    bVar3 = 0x20;
  }
  *(byte *)(param_1 + 0x124) = bVar2 | bVar3;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x900) {
    sub_080177CC(param_1,0x900,0,1);
  }
  pcVar4 = (char *)(param_1 + 0x129);
  cVar1 = *pcVar4;
  *pcVar4 = cVar1 + -1;
  if ((char)(cVar1 + -1) == -1) {
    *(undefined *)(param_1 + 0xed) = 2;
    sub_080177CC(param_1,0x901,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *pcVar4 = '\x04';
  }
  return in_lr;
}

