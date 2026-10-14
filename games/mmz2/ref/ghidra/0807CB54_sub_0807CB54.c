// sub_0807CB54 at 0x0807CB54 (thumb)

undefined4 sub_0807CB54(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0x5409);
    uVar2 = 0xff;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xbc) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x1f < bVar1) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

