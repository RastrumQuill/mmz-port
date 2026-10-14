// sub_0809DB4C at 0x0809DB4C (thumb)

undefined4 sub_0809DB4C(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6e00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if (((*(char *)(param_1 + 0xbd) == '\0') && (cVar1 = sub_0809DE24(param_1), cVar1 != '\x01')) &&
       (*(char *)(param_1 + 0x12) == '\x19')) {
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
      sub_0809DED0(param_1);
    }
  }
  return in_lr;
}

