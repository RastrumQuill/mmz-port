// sub_080A606C at 0x080A606C (thumb)

undefined4 sub_080A606C(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = sub_080A6368(param_1);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      cVar1 = '\0';
      goto LAB_080a611e;
    }
    bVar2 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar3 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    sub_0801CF00(param_1,0x8a04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\x02') {
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar3 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    sub_0801CF00(param_1,0x8a05);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_080a611e:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

