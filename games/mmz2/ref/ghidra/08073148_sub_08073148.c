// sub_08073148 at 0x08073148 (thumb)

undefined4 sub_08073148(int param_1)

{
  short sVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0xb6) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
      *(undefined *)(param_1 + 0xb5) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_0833f0c4);
    }
    sub_080127E4(param_1,0x1b00);
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  pcVar2 = (char *)(param_1 + 0xb9);
  iVar5 = *(int *)(param_1 + 0x54) + (int)*pcVar2 * (*(int *)(param_1 + 0x5c) + 0xc00);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  sVar1 = sub_08008CFC(iVar5,uVar3);
  if (sVar1 == 0) {
    if (*pcVar2 < '\0') {
      iVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),uVar3);
      *(int *)(param_1 + 0x54) = iVar5 + 0xc00;
      *pcVar2 = -*pcVar2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    iVar5 = sub_08009774(*(undefined4 *)(param_1 + 0x54),uVar3);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x58) + -0x1000;
    sVar1 = sub_08008CFC(iVar5,iVar4);
    if (sVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0x58) + 0x1000;
      sVar1 = sub_08008CFC(iVar5,iVar4);
      if (sVar1 != 0) {
        if (*pcVar2 < '\0') {
          iVar5 = sub_08009774(*(undefined4 *)(param_1 + 0x54),iVar4);
          iVar5 = iVar5 + 0xc00;
        }
        else {
          iVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),iVar4);
          iVar5 = iVar5 + -0xc00;
        }
        *(int *)(param_1 + 0x54) = iVar5;
        *pcVar2 = -*pcVar2;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * (int)*pcVar2;
      if (*(byte *)(param_1 + 0x12) < 0x18) {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (*pcVar2 < '\0') {
      iVar5 = sub_08009774(*(undefined4 *)(param_1 + 0x54),iVar4);
      iVar5 = iVar5 + 0xc00;
      goto LAB_08073258;
    }
    iVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),iVar4);
  }
  iVar5 = iVar5 + -0xc00;
LAB_08073258:
  *(int *)(param_1 + 0x54) = iVar5;
  *pcVar2 = -*pcVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

