// sub_080A0840 at 0x080A0840 (thumb)

undefined4 sub_080A0840(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    sub_08007390(param_1 + 0x74,&DAT_083678e4);
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    sub_08017700(param_1,0x3701);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar2;
      if (iVar2 < *(int *)(param_1 + 0xb4) + -0x6800) goto LAB_080a095e;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar2;
      if (*(int *)(param_1 + 0xb4) + 0x6800 < iVar2) {
LAB_080a095e:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar2 = *(int *)(param_1 + 0xb8) + -0x9000;
    if (iVar2 <= iVar4) break;
    *(int *)(param_1 + 0x58) = iVar2;
    goto LAB_080a095e;
  case 3:
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar4;
      iVar2 = *(int *)(iVar5 + 0x54) + (uint)*(byte *)(param_1 + 0xbc) * 0x800 + -0x800;
      if (iVar4 < iVar2) goto LAB_080a095c;
      break;
    }
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    iVar2 = *(int *)(iVar5 + 0x54) - ((uint)*(byte *)(param_1 + 0xbc) * 0x800 + -0x800);
    if (iVar4 <= iVar2) break;
LAB_080a095c:
    *(int *)(param_1 + 0x54) = iVar2;
    goto LAB_080a095e;
  case 5:
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = iVar2;
    if ((int)(*(int *)(param_1 + 0x68) - ((uint)*(byte *)(param_1 + 0xbc) * 0x1800 + 0x1000)) <
        iVar2) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(iVar5 + 0xbe) = 1;
    }
    break;
  case 6:
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') break;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_080a0a1c;
  }
  sub_080177F4(param_1);
  iVar2 = *(int *)(param_1 + 0x5c) + 0x30;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (0xa00 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0xa00;
  }
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
LAB_080a0a1c:
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  return in_lr;
}

