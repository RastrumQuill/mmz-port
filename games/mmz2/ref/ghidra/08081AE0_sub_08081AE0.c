// sub_08081AE0 at 0x08081AE0 (thumb)

undefined4 sub_08081AE0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0202e130;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (((*(uint *)(param_1 + 0x8c) & 0x800) != 0) && (DAT_0202e130 != 0)) {
      *(undefined *)(param_1 + 0x25) = 8;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar3 = (byte *)(param_1 + 0x71);
  bVar1 = *pbVar3;
  sub_080128D4(param_1);
  if ((int)(char)*pbVar3 != (uint)bVar1) {
    sub_08081F98(param_1,*pbVar3);
  }
  if (((*(uint *)(param_1 + 0x8c) & 0x800) == 0) || (iVar2 == 0)) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080032EC(0x36);
      *(undefined *)(param_1 + 0xb5) = 0;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
    *(uint *)(iVar2 + 0x58) =
         (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x68)) + -0xd00 +
         (uint)*(byte *)(param_1 + 0xbc) * -0x800;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080032EC(0x36);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

