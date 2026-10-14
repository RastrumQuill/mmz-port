// sub_08035478 at 0x08035478 (thumb)

undefined4 sub_08035478(int param_1)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar3 = 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar3 = 0x20;
  }
  *(byte *)(param_1 + 0x153) = bVar1 | bVar3;
  sub_0801CFC8(param_1,0xa01,1,2);
  if (*(char *)(param_1 + 0x154) == '\x03') {
    uVar2 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x154) != '\x02') {
      return in_lr;
    }
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0x101) = uVar2;
  return in_lr;
}

