// sub_0802D3AC at 0x0802D3AC (thumb)

undefined4 sub_0802D3AC(int param_1)

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
  if (sVar2 == 0xb03) {
    pcVar5 = (char *)(param_1 + 0x129);
    cVar1 = *pcVar5;
    *pcVar5 = cVar1 + -1;
    if ((char)(cVar1 + -1) == -1) {
      *(undefined *)(param_1 + 0xed) = 2;
      *pcVar5 = '\x04';
      sub_080177CC(param_1,0x801,1,4);
    }
  }
  else {
    if (sVar2 != 0x801) {
      sub_080177CC(param_1,0x801,0,*(char *)(param_1 + 0x129));
    }
    *(char *)(param_1 + 0x129) = *(char *)(param_1 + 0x72);
    if (*(char *)(param_1 + 0x72) < '\x02') {
      sub_080177CC(param_1,0x801,1,4);
      *(undefined *)(param_1 + 0xed) = 2;
    }
  }
  return in_lr;
}

