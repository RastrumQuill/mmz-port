// sub_08076324 at 0x08076324 (thumb)

undefined4 sub_08076324(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08363918);
    sub_08017700(param_1,0x2a04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 < 0) {
    if (iVar2 < -0x7ff) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      if (*(char *)(param_1 + 0xb9) == '\0') {
        uVar1 = 6;
      }
      else {
        uVar1 = 9;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

