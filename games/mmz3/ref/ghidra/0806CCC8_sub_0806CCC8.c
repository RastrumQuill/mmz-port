// sub_0806CCC8 at 0x0806CCC8 (thumb)

undefined4 sub_0806CCC8(int param_1,int *param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4);
  if ((((cVar1 == '\x03') || (cVar1 == '\x0e')) || (cVar1 == '\x0f')) &&
     (iVar3 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar3 + 0x8c) & 0x200) != 0)) {
    if (*(int *)(iVar3 + 0x54) < *param_2) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = 0xfe;
    }
    *(undefined *)(iVar3 + 0xbb) = uVar2;
  }
  if (((**(char **)(param_1 + 4) == '\x02') &&
      ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4) & 0x200ff) == 0x20002)) &&
     (iVar3 = *(int *)(param_1 + 0x2c), 1 < (byte)(*(char *)(iVar3 + 0xd) - 5U))) {
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(iVar3 + 0x54)) {
        *(undefined *)(iVar3 + 0xd) = 5;
        *(byte *)(iVar3 + 0xe) = *(byte *)(iVar3 + 10) & 0x10;
      }
    }
    else if (*(int *)(iVar3 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(undefined *)(iVar3 + 0xd) = 5;
      *(undefined *)(iVar3 + 0xe) = 0;
    }
    if ((*(uint *)(iVar3 + 0x8c) & 0x200) != 0) {
      *(undefined2 *)(iVar3 + 0xa4) = 1;
    }
  }
  return in_lr;
}

