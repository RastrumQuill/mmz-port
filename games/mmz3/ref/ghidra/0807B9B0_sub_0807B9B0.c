// sub_0807B9B0 at 0x0807B9B0 (thumb)

undefined4 sub_0807B9B0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x3e00);
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) != 0) goto LAB_0807ba38;
    uVar3 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar3 == 0) {
LAB_0807ba1a:
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) goto LAB_0807ba38;
    uVar3 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar3 == 0) goto LAB_0807ba1a;
    bVar1 = bVar1 | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
LAB_0807ba38:
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

