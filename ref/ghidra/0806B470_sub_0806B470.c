// sub_0806B470 at 0x0806B470 (thumb)

undefined4 sub_0806B470(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    iVar3 = param_1 + 0x6c;
    if (*(char *)(param_1 + 0x12) == '\x06') {
      sub_080033F0(iVar3,6);
    }
    if (*(char *)(param_1 + 0x12) == '3') {
      sub_080033F0(iVar3,7);
    }
    if (*(char *)(param_1 + 0x12) == '?') {
      sub_080033F0(iVar3,8);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x12) == '\x03') {
        sub_080033F0(param_1 + 0x6c,9);
      }
      if (*(char *)(param_1 + 0x12) == 'C') {
        sub_080033F0(param_1 + 0x6c,10);
      }
    }
  }
  else if (bVar1 == 2) {
    iVar3 = param_1 + 0x6c;
    if (*(char *)(param_1 + 0x12) == '\t') {
      sub_080033F0(iVar3,3);
    }
    if (*(char *)(param_1 + 0x12) == '+') {
      sub_080033F0(iVar3,4);
    }
    if (*(char *)(param_1 + 0x12) == ';') {
      sub_080033F0(iVar3,5);
    }
  }
  else if (bVar1 == 3) {
    iVar3 = param_1 + 0x6c;
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_080033F0(iVar3,0);
    }
    if (*(char *)(param_1 + 0x12) == '\f') {
      sub_080033F0(iVar3,3);
    }
    if (*(char *)(param_1 + 0x12) == '\'') {
      sub_080033F0(iVar3,4);
    }
    if (*(char *)(param_1 + 0x12) == '/') {
      sub_080033F0(iVar3,5);
    }
    if (*(char *)(param_1 + 0x12) == '7') {
      sub_080033F0(iVar3,4);
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
  if (*(char *)(param_1 + 0x12) == '@') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar2 = (&DAT_082b0da0)
              [(uint)*(byte *)(param_1 + 0xf) + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
    }
    else {
      iVar3 = sub_080C8B68(*(byte *)(param_1 + 0xf) + 8,0xc);
      uVar2 = (&DAT_082b0da0)[iVar3 + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}

