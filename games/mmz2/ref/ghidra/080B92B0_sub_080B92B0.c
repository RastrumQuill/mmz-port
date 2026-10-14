// sub_080B92B0 at 0x080B92B0 (thumb)

undefined4 sub_080B92B0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xac05);
    *(undefined *)(param_1 + 0x25) = 0x19;
    bVar1 = *(byte *)(param_1 + 0x11) >> 1 ^ *(byte *)(param_1 + 0x11);
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    pbVar2 = (byte *)(param_1 + 0x4a);
    *pbVar2 = *pbVar2 & 0xef | (byte)(uVar3 << 4);
    uVar3 = *(byte *)(param_1 + 0x11) & 1;
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4d) = (char)uVar3;
    *pbVar2 = *pbVar2 & 0xdf | (byte)(uVar3 << 5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(uint *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (*(byte *)(param_1 + 0x11) & 1) * -0x100;
  sub_08012A14(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

