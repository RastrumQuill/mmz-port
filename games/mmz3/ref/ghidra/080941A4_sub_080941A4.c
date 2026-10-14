// sub_080941A4 at 0x080941A4 (thumb)

undefined4 sub_080941A4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
    sub_08017700(param_1,0x8e06);
    uVar4 = *(byte *)(param_1 + 0xbd) ^ 1;
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar4 = uVar4 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xbd) * -0x200 + 0x100;
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar2 = sub_080935B0(param_1,*(undefined4 *)(param_1 + 0x5c));
  if (cVar2 == '\0') {
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < 0x101) {
      if (-0x101 < iVar3) goto LAB_080942b2;
      *(int *)(param_1 + 0x60) = iVar3 + 0x100;
    }
    else {
      *(int *)(param_1 + 0x60) = iVar3 + -0x100;
    }
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 7;
    if (*(int *)(param_1 + 0x5c) < 1) {
      cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    }
    else {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
    }
    *(char *)(param_1 + 0x12) = cVar2;
    sub_080177CC(param_1,0x8e06,*(undefined *)(param_1 + 0x12),1);
    sub_080177F4(param_1);
  }
LAB_080942b2:
  cVar2 = sub_0809357C(param_1,1);
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xbc) = 2;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

