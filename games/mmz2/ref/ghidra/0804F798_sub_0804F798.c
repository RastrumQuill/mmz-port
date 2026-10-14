// sub_0804F798 at 0x0804F798 (thumb)

undefined4 sub_0804F798(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 200);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_080127E4(param_1,0xa401);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x12) < 9) {
    sub_0809F624(uVar4,4);
    sub_08006E08(param_1 + 0x74,&DAT_0833b93c);
  }
  else if (*(byte *)(param_1 + 0x12) < 0x17) {
    sub_0809F624(uVar4,3);
    sub_08006E08(param_1 + 0x74,&DAT_0833b96c);
  }
  else {
    sub_0809F624(uVar4,3);
    sub_08006E08(param_1 + 0x74,&DAT_0833b99c);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

