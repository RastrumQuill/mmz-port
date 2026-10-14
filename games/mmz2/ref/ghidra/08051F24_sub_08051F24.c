// sub_08051F24 at 0x08051F24 (thumb)

undefined4 sub_08051F24(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080127E4(param_1,0xa601);
    if (bVar1) {
      iVar3 = *(int *)(param_1 + 0xb8) + 0xc3ff;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb8) + 0xc00;
    }
    uVar4 = sub_080EF150(iVar3 - *(int *)(param_1 + 0x54),0x38);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
    sub_08006E08(param_1 + 0x74,&DAT_0833c1c8);
    *(undefined *)(param_1 + 0xd0) = 1;
    *(undefined *)(param_1 + 0xd1) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

