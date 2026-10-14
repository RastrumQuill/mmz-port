// sub_08093C90 at 0x08093C90 (thumb)

undefined4 sub_08093C90(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0x8e08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x71) == '\x03')) {
    *(undefined *)(param_1 + 0x12) = 1;
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar3 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar2 = sub_0809357C(param_1,1);
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

