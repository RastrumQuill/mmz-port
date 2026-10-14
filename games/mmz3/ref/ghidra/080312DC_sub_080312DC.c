// sub_080312DC at 0x080312DC (thumb)

undefined4 sub_080312DC(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
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
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xd01) {
    sub_080177CC(param_1,0xd01,0,*(char *)(param_1 + 0x129));
  }
  *(char *)(param_1 + 0x129) = *(char *)(param_1 + 0x72);
  if (*(char *)(param_1 + 0x72) < '\x02') {
    sub_080177CC(param_1,0xd01,1,4);
    *(undefined *)(param_1 + 0xed) = 2;
  }
  return in_lr;
}

