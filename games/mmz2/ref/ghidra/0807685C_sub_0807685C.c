// sub_0807685C at 0x0807685C (thumb)

undefined4 sub_0807685C(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1400);
    sub_08006E08(param_1 + 0x74,&DAT_0833fa64);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\x10') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  }
  else if (cVar2 == '\x18') {
    sub_08076E8C(param_1);
  }
  return in_lr;
}

