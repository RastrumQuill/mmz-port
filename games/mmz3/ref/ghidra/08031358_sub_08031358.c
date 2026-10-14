// sub_08031358 at 0x08031358 (thumb)

undefined4 sub_08031358(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x124);
  bVar1 = *pbVar3;
  *pbVar3 = bVar1 | 1;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar2 = 0x10;
  }
  else {
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | 1 | bVar2;
  pcVar4 = (char *)(param_1 + 0x129);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xd01) {
    sub_080177CC(param_1,0xd01,1,*pcVar4);
  }
  *pcVar4 = *(char *)(param_1 + 0x72);
  if (*(char *)(param_1 + 0x72) < '\x02') {
    sub_080177CC(param_1,0xd01,2,0x10);
    *pcVar4 = '\x10';
    *(undefined *)(param_1 + 0xed) = 3;
  }
  return in_lr;
}

