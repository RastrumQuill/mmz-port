// sub_080BE040 at 0x080BE040 (thumb)

undefined4 sub_080BE040(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar4 = (byte *)(param_1 + 0xb8);
    *pbVar4 = 0;
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_08861884 + (uint)*pbVar4 * 2));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&UNK_0886180c + (uint)*pbVar4 * 0x18,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    uVar3 = 0x240;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xfffffdc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080be13a;
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  pbVar4 = (byte *)(param_1 + 0xb8);
  if (cVar2 == (&DAT_0886188c)[*pbVar4]) {
    uVar1 = *pbVar4 + 1;
    *pbVar4 = (byte)uVar1;
    if ((uint)*(byte *)(param_1 + 0x10) < (uVar1 & 0xff)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    else {
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_08861884 + (uint)*pbVar4 * 2));
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&UNK_0886180c + (uint)*pbVar4 * 0x18,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
LAB_080be13a:
  sub_0801CFF0(param_1);
  return in_lr;
}

