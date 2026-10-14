// sub_080BA680 at 0x080BA680 (thumb)

undefined4 sub_080BA680(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x39);
    bVar3 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar3 | 1;
    bVar1 = *(byte *)(param_1 + 0x74);
    if (bVar1 == 0) {
      bVar3 = bVar3 & 0xef | 1;
    }
    else {
      bVar3 = bVar3 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if (*(char *)(param_1 + 0x75) == '\0') {
      sub_080127E4(param_1,0x6b0f);
    }
    else {
      sub_080127E4(param_1,0x6b10);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    uVar4 = *(uint *)(iVar5 + 0xb4);
    uVar2 = 0x80;
  }
  else {
    uVar4 = *(uint *)(iVar5 + 0xb4);
    uVar2 = 0x100;
  }
  if ((uVar4 & uVar2) == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  sub_080128D4(param_1);
  return in_lr;
}

