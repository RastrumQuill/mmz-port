// sub_0806A75C at 0x0806A75C (thumb)

undefined4 sub_0806A75C(int param_1)

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
      sub_080033F0(iVar3,9);
    }
    if (*(char *)(param_1 + 0x12) == '\b') {
      sub_080033F0(iVar3,6);
    }
    if (*(char *)(param_1 + 0x12) == '#') {
      sub_080033F0(iVar3,9);
    }
    if (*(char *)(param_1 + 0x12) == '&') {
      sub_080033F0(iVar3,0xc);
    }
    if (*(char *)(param_1 + 0x12) == '*') {
      sub_080033F0(iVar3,0xd);
    }
    if (*(char *)(param_1 + 0x12) == '.') {
      sub_080033F0(iVar3,0xe);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = param_1 + 0x6c;
      if (*(char *)(param_1 + 0x12) == '\x04') {
        sub_080033F0(iVar3,3);
      }
      if (*(char *)(param_1 + 0x12) == '\"') {
        sub_080033F0(iVar3,6);
      }
      if (*(char *)(param_1 + 0x12) == '%') {
        sub_080033F0(iVar3,9);
      }
      if (*(char *)(param_1 + 0x12) == '(') {
        sub_080033F0(iVar3,10);
      }
    }
  }
  else if (bVar1 == 2) {
    iVar3 = param_1 + 0x6c;
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_080033F0(iVar3,10);
    }
    if (*(char *)(param_1 + 0x12) == '\n') {
      sub_080033F0(iVar3,9);
    }
    if (*(char *)(param_1 + 0x12) == '&') {
      sub_080033F0(iVar3,0xc);
    }
    if (*(char *)(param_1 + 0x12) == '\'') {
      sub_080033F0(iVar3,0xd);
    }
    if (*(char *)(param_1 + 0x12) == ')') {
      sub_080033F0(iVar3,0xe);
    }
    if (*(char *)(param_1 + 0x12) == '-') {
      sub_080033F0(iVar3,0xd);
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
  }
  else if (bVar1 == 3) {
    iVar3 = param_1 + 0x6c;
    if (*(char *)(param_1 + 0x12) == '\x02') {
      sub_080033F0(iVar3,0xd);
    }
    if (*(char *)(param_1 + 0x12) == '(') {
      sub_080033F0(iVar3,0xe);
    }
    if (*(char *)(param_1 + 0x12) == ',') {
      sub_080033F0(iVar3,0xd);
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
    if (*(char *)(param_1 + 0x12) == '/') {
      sub_080033F0(iVar3,10);
    }
    if (*(char *)(param_1 + 0x12) == '0') {
      sub_080033F0(iVar3,9);
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_0806BA20(param_1);
  if (*(char *)(param_1 + 0x12) == '1') {
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

