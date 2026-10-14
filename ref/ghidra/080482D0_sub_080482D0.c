// sub_080482D0 at 0x080482D0 (thumb)

undefined4 sub_080482D0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_08048358;
  sub_08029778(param_1,*(byte *)(param_1 + 0xca) + 0x12);
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  iVar3 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x1f;
  }
  iVar3 = iVar3 >> 5;
  *(int *)(param_1 + 0x54) = iVar3;
  if (iVar3 < 1) {
    uVar2 = 0xfffffc80;
    if (iVar3 < -0x380) goto LAB_0804831a;
  }
  else {
    uVar2 = 0x380;
    if (0x380 < iVar3) {
LAB_0804831a:
      *(undefined4 *)(param_1 + 0x54) = uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(iVar3 + 9)] + 0xc);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  sub_08087330(param_1,3,*(byte *)(param_1 + 0xca));
  sub_08001EAC(0xb8);
LAB_08048358:
  sub_080297C0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (iVar3 < 0x701) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 10) {
    sub_0800561C(param_1 + 0x74,&DAT_082aea88);
  }
  else if (bVar1 < 0xb) {
    if (bVar1 == 4) {
      sub_0800561C(param_1 + 0x74,&DAT_082aea6c);
    }
  }
  else if (bVar1 == 0xc) {
    sub_0800561C(param_1 + 0x74,&DAT_082ae9c4);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

