// sub_08056924 at 0x08056924 (thumb)

undefined4 sub_08056924(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar6 = bVar1 & 1;
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080127E4(param_1,0xa632);
    if ((*(byte *)(param_1 + 0xb6) & 1) != 0) {
      *(uint *)(param_1 + 0x5c) = ((uint)*(byte *)(param_1 + 0x13) * -2 + 1) * 0x180;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    }
    *(undefined *)(param_1 + 0x12) = 0x26;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (0x18 < *(byte *)(param_1 + 0x12)) {
    return in_lr;
  }
  puVar5 = (ushort *)(param_1 + 0x50);
  uVar2 = *puVar5 - 7;
  pbVar4 = (byte *)(param_1 + 0xb6);
  if ((*pbVar4 & 1) == 0) goto LAB_08056a5a;
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar3 = *(int *)(param_1 + 0xb8) + 0x1400;
    if (iVar7 < iVar3) {
      *(int *)(param_1 + 0x54) = iVar3;
LAB_08056a2a:
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb8) + 0xbbff;
    if (iVar3 < iVar7) {
      *(int *)(param_1 + 0x54) = iVar3;
      goto LAB_08056a2a;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar7 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar7;
  if (0x700 < iVar7) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc);
    *pbVar4 = *pbVar4 & 0xfe;
  }
LAB_08056a5a:
  if (uVar2 < 0xad) {
    *puVar5 = 0xac;
    *(undefined2 *)(param_1 + 0x52) = 0xac;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *puVar5 = uVar2;
    *(ushort *)(param_1 + 0x52) = uVar2;
  }
  return in_lr;
}

