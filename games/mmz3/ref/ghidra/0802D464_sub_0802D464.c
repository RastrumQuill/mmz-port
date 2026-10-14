// sub_0802D464 at 0x0802D464 (thumb)

undefined4 sub_0802D464(int param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar3 = *(byte *)(param_1 + 0x124);
    bVar4 = 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x124);
    bVar4 = 0x20;
  }
  *(byte *)(param_1 + 0x124) = bVar3 | bVar4;
  sVar2 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  if (sVar2 == 0xb04) {
    pcVar5 = (char *)(param_1 + 0x129);
    cVar1 = *pcVar5;
    *pcVar5 = cVar1 + -1;
    if ((char)(cVar1 + -1) == -1) {
      *(undefined *)(param_1 + 0xed) = 3;
      *pcVar5 = '\x10';
      sub_080177CC(param_1,0x801,2,0x10);
    }
  }
  else {
    if (sVar2 != 0x801) {
      if (*(char *)(param_1 + 0xe8) == '\x01') {
        sub_08017700(param_1,0xb04);
        return in_lr;
      }
      sub_080177CC(param_1,0x801,1,*(undefined *)(param_1 + 0x129));
    }
    *(char *)(param_1 + 0x129) = *(char *)(param_1 + 0x72);
    if (*(char *)(param_1 + 0x72) < '\x02') {
      sub_080177CC(param_1,0x801,2,0x10);
      *(char *)(param_1 + 0x129) = '\x10';
      *(undefined *)(param_1 + 0xed) = 3;
    }
  }
  return in_lr;
}

