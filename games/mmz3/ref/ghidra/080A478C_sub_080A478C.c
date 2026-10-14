// sub_080A478C at 0x080A478C (thumb)

undefined4 sub_080A478C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar7 + 0xc)) || (*(char *)(iVar7 + 0xd) == '\n')) goto LAB_080a495c;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar4 = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_08007390(param_1 + 0x74,&DAT_08368184);
    sub_08017700(param_1,0xae01);
    bVar1 = *(byte *)(iVar7 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    uVar4 = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar5 = -0x4000;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar5 = 0x4000;
    }
    *(int *)(param_1 + 0x54) = iVar7 + iVar5;
    uVar3 = *(uint *)(param_1 + 0xc0);
    uVar6 = 0x100;
    break;
  case 2:
    uVar4 = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_08017700(param_1,0xae02);
    sub_08007390(param_1 + 0x74,&DAT_0836819c);
    bVar1 = *(byte *)(iVar7 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    uVar4 = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar5 = -0x4000;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar5 = 0x4000;
    }
    *(int *)(param_1 + 0x54) = iVar7 + iVar5;
    uVar3 = *(uint *)(param_1 + 0xc0);
    uVar6 = 0x200;
    break;
  case 4:
    sub_08007390(param_1 + 0x74,&DAT_0836816c);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(byte *)(param_1 + 0x12) < 0x1e) {
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
LAB_080a495c:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  default:
    goto switchD_080a47b2_caseD_6;
  }
  if ((uVar3 & uVar6) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_080a47b2_caseD_6:
  return in_lr;
}

