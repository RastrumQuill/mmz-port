// sub_0802F74C at 0x0802F74C (thumb)

undefined4 sub_0802F74C(int param_1)

{
  byte bVar1;
  byte bVar2;
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
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xb01) {
    sub_080177CC(param_1,0xb01,0,*(char *)(param_1 + 0x129));
  }
  *(char *)(param_1 + 0x129) = *(char *)(param_1 + 0x72);
  if (*(char *)(param_1 + 0x72) < '\x02') {
    sub_080177CC(param_1,0xb01,1,4);
    *(undefined *)(param_1 + 0xed) = 2;
  }
  return in_lr;
}

