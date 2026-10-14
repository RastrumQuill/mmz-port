// sub_08036348 at 0x08036348 (thumb)

undefined4 sub_08036348(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0xbd01);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080360E0(param_1);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
      sub_080177F4(param_1);
      uVar2 = *(ushort *)(iVar5 + 0x10);
      bVar1 = (byte)uVar2 & 0x30;
      if ((uVar2 & 0x30) != 0) {
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835b3e0);
    sub_08017700(param_1,0xbd02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080360E0(param_1);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  bVar4 = false;
  uVar2 = *(ushort *)(iVar5 + 0x10);
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 0x10) != 0) {
      iVar5 = *(int *)(param_1 + 0x5c) + 0x10;
      *(int *)(param_1 + 0x5c) = iVar5;
      if (0x300 < iVar5) {
        *(undefined4 *)(param_1 + 0x5c) = 0x300;
      }
      bVar4 = true;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c) + -0x10;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < -0x300) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
    }
    bVar4 = true;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  cVar3 = sub_080360BC(param_1);
  if ((cVar3 != '\0') && (!bVar4)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_080177F4(param_1);
  return in_lr;
}

