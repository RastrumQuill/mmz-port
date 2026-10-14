// sub_08088ED8 at 0x08088ED8 (thumb)

undefined4 sub_08088ED8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(byte *)(iVar4 + 0xc) < 2)) {
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar2 = *(int *)(iVar4 + 0x54);
          iVar3 = -0xa00;
        }
        else {
          iVar2 = *(int *)(iVar4 + 0x54);
          iVar3 = -0x3400;
        }
      }
      else if (*(char *)(param_1 + 0x10) == '\0') {
        iVar2 = *(int *)(iVar4 + 0x54);
        iVar3 = 0xa00;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x54);
        iVar3 = 0x3400;
      }
      *(int *)(param_1 + 0x54) = iVar2 + iVar3;
      *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x2a00;
      if (*(char *)(param_1 + 0x73) == '\x03') {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          *(undefined4 *)(param_1 + 100) = 0xfffffff0;
        }
        else {
          *(undefined4 *)(param_1 + 100) = 0x10;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined *)(param_1 + 0x12) = 0xc0;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (*(char *)(param_1 + 0xd) == '\x01') {
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 0x400) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08088FE8(param_1);
  }
  return in_lr;
}

