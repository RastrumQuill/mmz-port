// sub_0806A9AC at 0x0806A9AC (thumb)

undefined4 sub_0806A9AC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x12) == '\t') {
      sub_080033F0(param_1 + 0x6c,10);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x12) == '\x12') {
        sub_080033F0(param_1 + 0x6c,9);
      }
      if (*(char *)(param_1 + 0x12) == '\x15') {
        sub_080033F0(param_1 + 0x6c,6);
      }
    }
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 == '\x06') {
      sub_080033F0(param_1 + 0x6c,0xe);
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      cVar2 = *(char *)(param_1 + 0x12);
    }
    if (cVar2 == '\f') {
      sub_080033F0(param_1 + 0x6c,0xd);
    }
  }
  else if (bVar1 == 3) {
    iVar4 = param_1 + 0x6c;
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_080033F0(iVar4,10);
    }
    if (*(char *)(param_1 + 0x12) == '\x03') {
      sub_080033F0(iVar4,0xd);
    }
    if (*(char *)(param_1 + 0x12) == '\x0f') {
      sub_080033F0(iVar4,0xe);
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_0806BA20(param_1);
  if (*(char *)(param_1 + 0x12) == '\x16') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = (&DAT_082b0da0)
              [(uint)*(byte *)(param_1 + 0xf) + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
    }
    else {
      iVar4 = sub_080C8B68(*(byte *)(param_1 + 0xf) + 8,0xc);
      uVar3 = (&DAT_082b0da0)[iVar4 + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0x12) = 3;
  }
  return in_lr;
}

