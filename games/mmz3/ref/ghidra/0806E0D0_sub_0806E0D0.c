// sub_0806E0D0 at 0x0806E0D0 (thumb)

undefined4 sub_0806E0D0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(byte *)(param_1 + 0x10) < 4) {
      sub_08017700(param_1,0x1e14);
      uVar2 = (uint)(*(char *)(param_1 + 0x10) == '\x01');
      if (uVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08362fbc);
      bVar1 = *(byte *)(param_1 + 10);
      bVar4 = bVar1 & 0xfe;
      *(byte *)(param_1 + 10) = bVar4;
      uVar2 = (uint)(*(char *)(param_1 + 0x10) == '\x05');
      if (uVar2 == 0) {
        bVar1 = bVar1 & 0xee;
      }
      else {
        bVar1 = bVar4 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    *(undefined *)(param_1 + 0x25) = 0x17;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    bVar4 = *(byte *)(DAT_0202f5c0 + 10) >> 4;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      if ((bVar4 & 1) == 0) goto LAB_0806e1e8;
    }
    else if ((bVar4 & 1) == 1) goto LAB_0806e1e8;
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if ((bVar1 & 0x10) == 0) {
      if ((iVar3 < 0) && (-0x7800 < iVar3)) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
      }
    }
    else if (iVar3 - 1U < 0x77ff) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
LAB_0806e1e8:
  sub_080177F4(param_1);
  return in_lr;
}

