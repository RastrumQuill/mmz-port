// sub_08081C0C at 0x08081C0C (thumb)

undefined4 sub_08081C0C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6603);
    sub_08081F98(param_1,0xb);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar4 = (byte *)(param_1 + 0x71);
  bVar1 = *pbVar4;
  sub_080128D4(param_1);
  iVar2 = DAT_0202e130;
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xb5) = 0;
    uVar3 = 7;
  }
  else {
    if (DAT_0202e130 != 0) {
      pbVar5 = (byte *)(param_1 + 0xbc);
      if ((int)(char)*pbVar4 != (uint)bVar1) {
        if (*pbVar5 != 0) {
          *pbVar5 = *pbVar5 - 1;
        }
        sub_08081F98(param_1,*pbVar4 + 10);
      }
      *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
      *(uint *)(iVar2 + 0x58) =
           (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x68)) + -0xd00 + (uint)*pbVar5 * -0x800;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar3 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

