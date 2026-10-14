// sub_0805C348 at 0x0805C348 (thumb)

undefined4 sub_0805C348(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa901);
    iVar3 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
      iVar5 = 0x4000;
    }
    else {
      iVar3 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
      iVar5 = -0x4000;
    }
    uVar4 = sub_080EF150(iVar3 + iVar5,0x30);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x25;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

