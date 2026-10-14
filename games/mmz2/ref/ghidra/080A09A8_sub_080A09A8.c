// sub_080A09A8 at 0x080A09A8 (thumb)

undefined4 sub_080A09A8(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08012580(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    sub_080127E4(param_1,0x3603);
    bVar1 = 0 < *(int *)(param_1 + 0x5c);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_08006E08(param_1 + 0x74,&DAT_0834441c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x380;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar4 = sub_080A0524(param_1);
  if ((uVar4 & 3) != 0) {
    sub_080032EC(0x35);
    sub_080AC60C(1,param_1 + 0x54);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

