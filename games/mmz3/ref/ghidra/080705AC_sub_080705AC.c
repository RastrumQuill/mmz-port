// sub_080705AC at 0x080705AC (thumb)

undefined4 sub_080705AC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1800);
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0xbc) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xbc) = 1;
    }
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = *(byte *)(param_1 + 0xbc) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    sub_08007390(param_1 + 0x74,&DAT_0836320c);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x60) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 8;
  sub_08070FF0(param_1);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54);
  }
  else {
    iVar4 = *(int *)(DAT_0202f5c0 + 0x54);
    iVar2 = *(int *)(param_1 + 0x54);
  }
  if (iVar4 - iVar2 < 0x8000) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

