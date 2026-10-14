// sub_080552F8 at 0x080552F8 (thumb)

undefined4 sub_080552F8(int param_1)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833c438);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  puVar4 = (ushort *)(param_1 + 0x50);
  uVar1 = *puVar4 + 4;
  pbVar3 = (byte *)(param_1 + 0xb6);
  if ((*pbVar3 & 1) == 0) goto LAB_080553ae;
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar2 = *(int *)(param_1 + 0xb8) + 0x1000;
    if (iVar5 < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2;
LAB_0805537e:
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8) + 0xbfff;
    if (iVar2 < iVar5) {
      *(int *)(param_1 + 0x54) = iVar2;
      goto LAB_0805537e;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc);
    *pbVar3 = *pbVar3 & 0xfe;
  }
LAB_080553ae:
  if (uVar1 < 0xc2) {
    *puVar4 = uVar1;
    *(ushort *)(param_1 + 0x52) = uVar1;
  }
  else {
    *puVar4 = 0xc2;
    *(undefined2 *)(param_1 + 0x52) = 0xc2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

