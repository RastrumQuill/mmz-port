// sub_08087C50 at 0x08087C50 (thumb)

undefined4 sub_08087C50(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08341658,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar5 + 0x1c);
    *(undefined *)(param_1 + 0x25) = 0x19;
    bVar1 = *(byte *)(param_1 + 0xb4);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    sub_080127E4(param_1,0x6b05);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = (*(int *)(iVar5 + 0x54) >> 8) + -0x19;
  *(int *)(param_1 + 0x54) = iVar4;
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0xb4) * 0x32;
  *(int *)(param_1 + 0x54) = iVar4;
  iVar4 = iVar4 + (*(int *)(iVar3 + 0x54) >> 8) + 10;
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x54) = ((int)(iVar4 + (uint)*(byte *)(param_1 + 0xb4) * -0x14) >> 1) << 8;
  iVar5 = (*(int *)(iVar5 + 0x58) >> 8) + -0x21;
  *(int *)(param_1 + 0x58) = iVar5;
  iVar5 = iVar5 + (uint)*(byte *)(param_1 + 0xb5) * 0x42;
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x58) = (iVar5 + (*(int *)(iVar3 + 0x58) >> 8) >> 1) << 8;
  sub_080128D4(param_1);
  return in_lr;
}

