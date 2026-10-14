// sub_08031FF8 at 0x08031FF8 (thumb)

undefined4 sub_08031FF8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x156);
  if (cVar1 == '\x03') {
    if ((*(char *)(param_1 + 0x71) == '\0') && ('\x01' < *(char *)(param_1 + 0x72))) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x1c4) + 0x200;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x1c4) + -0x200;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c4);
    }
    *(int *)(param_1 + 0x54) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x1c8) + 0x2d00;
  }
  else {
    iVar2 = 1;
    if ((cVar1 != '\0') && (iVar2 = 0, cVar1 == '\x01')) {
      iVar2 = 2;
    }
    if (*(char *)(param_1 + 0x72) < '\x02') {
      iVar2 = iVar2 + 1;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x1c4) +
              *(int *)(&DAT_0884fa24 + (*(char *)(param_1 + 0x71) + iVar2) * 4);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1c4) -
              *(int *)(&DAT_0884fa24 + (*(char *)(param_1 + 0x71) + iVar2) * 4);
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x1c8) +
         *(int *)(&DAT_0884fa4c + (*(char *)(param_1 + 0x71) + iVar2) * 4);
  }
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,1);
  if ((*(int *)(param_1 + 0x54) == iVar2) && (*(int *)(param_1 + 0x58) == iVar3)) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

