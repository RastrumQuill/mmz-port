// sub_08124AE4 at 0x08124AE4 (thumb)

undefined8 sub_08124AE4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined *)(*(int *)(param_1 + 0xdcc) + 0x254) = 2;
  switch(*(undefined *)(param_1 + 0xde5)) {
  case 0:
    *(undefined4 *)(param_1 + 0xdf0) = 0;
    *(undefined *)(param_1 + 0xde8) = 0x3c;
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0xde8) + -1;
    *(char *)(param_1 + 0xde8) = cVar1;
    if (cVar1 == -1) goto LAB_08124bd2;
    break;
  case 2:
    if (*(short *)(param_1 + 6) == 0) {
      uVar3 = sub_080D3AC8(4);
      *(undefined4 *)(param_1 + 0xdd0) = uVar3;
    }
    else {
      iVar2 = sub_080E87EC(param_1 + 0xdc4,0,*(undefined2 *)(param_1 + 0xdd4));
      *(int *)(param_1 + 0xdd0) = iVar2;
      if (DAT_02000a98 < *(uint *)(param_1 + 0xddc)) {
        *(undefined *)(iVar2 + 0x7c) = 1;
      }
    }
    sub_08002B5C(0xa3);
    sub_08002A98(0x85);
    goto LAB_08124bd2;
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0xdd0) + 0xc)) goto LAB_08124bd2;
    break;
  case 4:
    DAT_0202f614 = 0x40;
LAB_08124bd2:
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
    break;
  case 5:
    if (DAT_0202f614 == 0x20) {
      sub_08124980(param_1);
      uVar3 = 0;
      goto LAB_08124c0e;
    }
  }
  if (*(short *)(param_1 + 6) == 0) {
    *(undefined4 *)(param_1 + 0xdf8) = 0xff;
  }
  uVar3 = 1;
LAB_08124c0e:
  return CONCAT44(in_lr,uVar3);
}

