// sub_0801B648 at 0x0801B648 (thumb)

void sub_0801B648(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(byte *)(param_1 + 0x188) & 2;
  if ((*(byte *)(param_1 + 0x188) & 2) == 0) {
    *(char *)(param_1 + 0x122) = (char)uVar2;
  }
  else if ((*(byte *)(param_1 + 0xd) < 9) && (*(byte *)(param_1 + 0xd) != 7)) {
    if ((DAT_02022b62 & 0x8000) != 0) {
      return;
    }
    bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    uVar2 = bVar1 & 0x10;
    if (((bVar1 & 0x10) == 0) || (uVar2 = *(byte *)(param_1 + 0x122) + 1, uVar2 < 0x100)) {
      *(char *)(param_1 + 0x122) = (char)uVar2;
    }
    if (*(char *)(param_1 + 0x219) == '\x01') {
      bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      uVar2 = bVar1 & 0x80;
      if (((bVar1 & 0x80) != 0) && (uVar2 = *(byte *)(param_1 + 0x123) + 1, 0xff < uVar2)) {
        return;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
    *(undefined *)(param_1 + 0x122) = 0;
  }
  *(char *)(param_1 + 0x123) = (char)uVar2;
  return;
}

