// sub_080A3CD0 at 0x080A3CD0 (thumb)

undefined4 sub_080A3CD0(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar3 = *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x58) + iVar3;
    *(int *)(param_1 + 0x58) = iVar4;
    if (iVar3 < 1) {
      if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar5 + 0xbc) != 0)) {
        if (*(int *)(param_1 + 0xb8) <= *(int *)(param_1 + 0x58)) goto LAB_080a3e10;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
        *(int *)(param_1 + 0x60) = -iVar3;
        uVar1 = 1;
        goto LAB_080a3e08;
      }
      if (*(int *)(param_1 + 0xb8) + 0x1800 <= iVar4) goto LAB_080a3e10;
      *(int *)(param_1 + 0x60) = -iVar3;
      *(undefined *)(param_1 + 0x12) = 1;
      cVar2 = '\x03';
    }
    else if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar5 + 0xb4) != 0)) {
      if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0xb8)) goto LAB_080a3e10;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x60) = -iVar3;
      uVar1 = 1;
LAB_080a3e08:
      *(undefined *)(param_1 + 0x12) = uVar1;
      cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    }
    else {
      if (iVar4 <= *(int *)(param_1 + 0xb8) + -0x1800) goto LAB_080a3e10;
      *(int *)(param_1 + 0x60) = -iVar3;
      *(undefined *)(param_1 + 0x12) = 1;
      cVar2 = '\x03';
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54) + iVar3;
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar3 < 1) {
      if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar5 + 0xc0) != 0)) {
        iVar5 = *(int *)(param_1 + 0xb4);
        if (iVar5 <= *(int *)(param_1 + 0x54)) goto LAB_080a3e10;
        goto LAB_080a3e00;
      }
      if (*(int *)(param_1 + 0xb4) + 0x1800 <= iVar4) goto LAB_080a3e10;
      *(int *)(param_1 + 0x5c) = -iVar3;
      *(undefined *)(param_1 + 0x12) = 0;
      cVar2 = '\x03';
    }
    else {
      if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar5 + 0xb8) != 0)) {
        iVar5 = *(int *)(param_1 + 0xb4);
        if (*(int *)(param_1 + 0x54) <= iVar5) goto LAB_080a3e10;
LAB_080a3e00:
        *(int *)(param_1 + 0x54) = iVar5;
        *(int *)(param_1 + 0x5c) = -iVar3;
        uVar1 = 0;
        goto LAB_080a3e08;
      }
      if (iVar4 <= *(int *)(param_1 + 0xb4) + -0x1800) goto LAB_080a3e10;
      *(int *)(param_1 + 0x5c) = -iVar3;
      *(undefined *)(param_1 + 0x12) = 0;
      cVar2 = '\x03';
    }
  }
  *(char *)(param_1 + 0x13) = cVar2;
LAB_080a3e10:
  if (1 < *(byte *)(param_1 + 0x13)) {
    if (*(byte *)(param_1 + 0x13) < 3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080A3970(param_1);
    }
  }
  return in_lr;
}

