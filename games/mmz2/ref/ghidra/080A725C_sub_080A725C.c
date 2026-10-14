// sub_080A725C at 0x080A725C (thumb)

undefined4 sub_080A725C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  pbVar4 = (byte *)(*(int *)(param_1 + 0x28) + 0xb6);
  if ((*pbVar4 & 1) == 0) {
    pbVar3 = (byte *)(param_1 + 0xb6);
    bVar2 = *pbVar3;
    *pbVar3 = bVar2 & 0xfe;
    bVar1 = *pbVar4;
    if ((bVar1 & 8) == 0) {
      *pbVar3 = bVar2 & 0xf6;
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      if ((bVar1 & 0x10) == 0) {
        bVar2 = bVar2 & 0xee;
      }
      else {
        bVar2 = bVar2 & 0xfe | 0x10;
      }
      *pbVar3 = bVar2;
      *pbVar3 = *pbVar3 | 8;
      *(undefined *)(param_1 + 0xd) = 0xd;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = 0x4000;
  return in_lr;
}

