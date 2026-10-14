// sub_08048C6C at 0x08048C6C (thumb)

undefined4 sub_08048C6C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa502);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_08006E08(param_1 + 0x74,&DAT_0833ad0c);
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xff7f;
    *(char *)(param_1 + 0xbe) = *(char *)(param_1 + 0xbe) + -1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x100;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if (sVar2 != 0) {
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined *)(param_1 + 0xd) = 0x19;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

