// sub_08030CEC at 0x08030CEC (thumb)

undefined4 sub_08030CEC(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x174) = 1;
  pcVar5 = (char *)(param_1 + 0x13d);
  cVar2 = *pcVar5;
  *pcVar5 = cVar2 + '\x01';
  if ((char)(cVar2 + '\x01') == '\x03') {
    *pcVar5 = '\0';
    sub_080D1914(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if ((*(byte *)(param_1 + 0x153) & 2) != 0) {
    return in_lr;
  }
  uVar6 = *(uint *)(param_1 + 600);
  if ((uVar6 & 0x20) == 0) {
    if ((uVar6 & 0x10) == 0) {
      uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  if (uVar6 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 0x142) & 0x20) == 0) {
    if (uVar6 == 0) goto LAB_08030df6;
    sVar3 = sub_0803879C(param_1);
    iVar4 = (int)sVar3;
  }
  else if (uVar6 == 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x40;
    sVar3 = sub_0803879C(param_1);
    if (*(int *)(param_1 + 0x5c) + (int)sVar3 < 0 == SCARRY4(*(int *)(param_1 + 0x5c),(int)sVar3))
    goto LAB_08030e04;
LAB_08030df6:
    sVar3 = sub_0803879C(param_1);
    iVar4 = -(int)sVar3;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x40;
    sVar3 = sub_0803879C(param_1);
    if (*(int *)(param_1 + 0x5c) <= (int)sVar3) goto LAB_08030e04;
    sVar3 = sub_0803879C(param_1);
    iVar4 = (int)sVar3;
  }
  *(int *)(param_1 + 0x5c) = iVar4;
LAB_08030e04:
  cVar2 = *(char *)(param_1 + 0x13a) + -1;
  *(char *)(param_1 + 0x13a) = cVar2;
  if (cVar2 == -1) {
    if ((*(uint *)(param_1 + 600) & 0x30) == 0) {
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

