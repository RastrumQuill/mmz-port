// sub_0807A368 at 0x0807A368 (thumb)

undefined4 sub_0807A368(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    sub_080127E4(param_1,0x3700);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_08012CA4(param_1,7);
    }
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ('\x01' < *(char *)(param_1 + 0x71)) {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    sVar3 = sub_08008CFC(iVar4,*(int *)(param_1 + 0x58) + -0x800);
    if (sVar3 == 0) {
      sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      if (sVar3 == 0) {
        uVar2 = 3;
      }
      else {
        if ((*(char *)(param_1 + 0x10) != '\x01') ||
           ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
            *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54))) {
          uVar5 = sub_080093C4(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          *(undefined4 *)(param_1 + 0x58) = uVar5;
          return in_lr;
        }
        uVar2 = 5;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

