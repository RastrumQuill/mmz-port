// sub_08048884 at 0x08048884 (thumb)

undefined4 sub_08048884(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa502);
    *(byte *)(param_1 + 0x4c) = (byte)((uint)*(undefined4 *)(param_1 + 0x5c) >> 0x1f);
    *(byte *)(param_1 + 0x4a) =
         *(byte *)(param_1 + 0x4a) & 0xef | (char)(*(int *)(param_1 + 0x5c) >> 0x1f) * -0x10;
    if (*(int *)(param_1 + 0x5c) < 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  sVar2 = sub_08008CFC();
  if (sVar2 != 0) {
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

