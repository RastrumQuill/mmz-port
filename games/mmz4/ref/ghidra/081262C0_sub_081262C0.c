// sub_081262C0 at 0x081262C0 (thumb)

undefined8 sub_081262C0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined *)(*(int *)(param_1 + 0xdcc) + 0x254) = 3;
  switch(*(undefined *)(param_1 + 0xde5)) {
  case 0:
    *(undefined4 *)(param_1 + 0xe08) = 2;
    *(undefined *)(param_1 + 0xde8) = 0x3c;
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0xde8) + -1;
    *(char *)(param_1 + 0xde8) = cVar1;
    if (cVar1 == -1) goto LAB_081263a6;
    break;
  case 2:
    if (*(short *)(param_1 + 6) == 0) {
      uVar3 = sub_080D3AC8(4);
      *(undefined4 *)(param_1 + 0xdd0) = uVar3;
    }
    else {
      iVar2 = sub_080E87EC(param_1 + 0xdc4,0,*(undefined2 *)(param_1 + 0xdd4));
      *(int *)(param_1 + 0xdd0) = iVar2;
      if (DAT_02000aa4 < *(uint *)(param_1 + 0xddc)) {
        *(undefined *)(iVar2 + 0x7c) = 1;
      }
    }
    sub_08002A98(0x91);
    goto LAB_081263a6;
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0xdd0) + 0xc)) goto LAB_081263a6;
    break;
  case 4:
    DAT_0202f614 = 0x40;
LAB_081263a6:
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
    break;
  case 5:
    if (DAT_0202f614 == 0x20) {
      sub_08125FD0(param_1);
      *(undefined4 *)(param_1 + 0xe08) = 3;
      uVar3 = 0;
      goto LAB_081263ee;
    }
  }
  *(undefined *)(*(int *)(param_1 + 0xdcc) + 0x254) = 1;
  uVar3 = 1;
LAB_081263ee:
  return CONCAT44(in_lr,uVar3);
}

