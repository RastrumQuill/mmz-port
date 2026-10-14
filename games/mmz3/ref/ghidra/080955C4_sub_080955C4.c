// sub_080955C4 at 0x080955C4 (thumb)

undefined4 sub_080955C4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083667b4);
    sub_08017700(param_1,0xd402);
    uVar3 = *(byte *)(param_1 + 0xb9) ^ 1;
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = uVar3 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xb9) * -0x100 + 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08094B14(param_1,*(undefined4 *)(param_1 + 0x5c));
  sub_080177F4(param_1);
  cVar2 = sub_08094AE0(param_1,1);
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xb8) = 2;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

