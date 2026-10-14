// sub_080335E0 at 0x080335E0 (thumb)

undefined4 sub_080335E0(int param_1)

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
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    sub_0801CF00(param_1,0xb04);
  }
  else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xb04) {
    sub_0801CFC8(param_1,0x801,1,4);
  }
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

