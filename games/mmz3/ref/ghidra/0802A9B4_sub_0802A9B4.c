// sub_0802A9B4 at 0x0802A9B4 (thumb)

undefined4 sub_0802A9B4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x147) != '\x03') {
    *(char *)(param_1 + 0x147) = '\x01';
  }
  pcVar5 = (char *)(param_1 + 0x123);
  cVar2 = *pcVar5;
  *pcVar5 = cVar2 + '\x01';
  if ((char)(cVar2 + '\x01') == '\x03') {
    *pcVar5 = '\0';
    sub_080B3368(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if ((*(byte *)(param_1 + 0x124) & 1) != 0) {
    return in_lr;
  }
  uVar6 = *(uint *)(param_1 + 0x218);
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
  if (*(char *)(param_1 + 0x11f) == '\0') {
    if (uVar6 == 0) goto LAB_0802aac8;
    sVar3 = sub_08032D6C(param_1);
    iVar4 = (int)sVar3;
  }
  else if (uVar6 == 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x20;
    sVar3 = sub_08032D6C(param_1);
    if (*(int *)(param_1 + 0x5c) + (int)sVar3 < 0 == SCARRY4(*(int *)(param_1 + 0x5c),(int)sVar3))
    goto LAB_0802aad6;
LAB_0802aac8:
    sVar3 = sub_08032D6C(param_1);
    iVar4 = -(int)sVar3;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x20;
    sVar3 = sub_08032D6C(param_1);
    if (*(int *)(param_1 + 0x5c) <= (int)sVar3) goto LAB_0802aad6;
    sVar3 = sub_08032D6C(param_1);
    iVar4 = (int)sVar3;
  }
  *(int *)(param_1 + 0x5c) = iVar4;
LAB_0802aad6:
  cVar2 = *(char *)(param_1 + 0x110) + -1;
  *(char *)(param_1 + 0x110) = cVar2;
  if (cVar2 == -1) {
    if ((*(uint *)(param_1 + 0x218) & 0x30) == 0) {
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

