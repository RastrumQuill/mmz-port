// sub_080A4C34 at 0x080A4C34 (thumb)

undefined4 sub_080A4C34(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08368298);
    sub_0801749C(param_1);
    bVar1 = *(byte *)(iVar4 + 10) >> 4;
    uVar2 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    sub_08017700(param_1,0x4900);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 0x200;
  sub_080A4A24(param_1);
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0x25) = 0x17;
  puVar3 = (uint *)(iVar4 + 0xc0);
  if ((*puVar3 & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar3 & 8) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar3 & 0x20) != 0) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar3 & 0x80) != 0) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

