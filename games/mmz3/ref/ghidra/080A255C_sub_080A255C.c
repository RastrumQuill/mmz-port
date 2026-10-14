// sub_080A255C at 0x080A255C (thumb)

undefined4 sub_080A255C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  puVar5 = (uint *)(param_1 + 0x8c);
  uVar2 = *puVar5;
  if (((uVar2 & 0x200) == 0) && ((uVar2 & 0x400100) == 0)) {
    if ((uVar2 & 4) == 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != '\0') goto LAB_080a25ea;
      *puVar5 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    else {
      *puVar5 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08017700(param_1,0x4201);
    *(undefined *)(param_1 + 0xe) = 4;
  }
  else {
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08017700(param_1,0x4201);
    *(undefined *)(param_1 + 0xe) = 4;
  }
LAB_080a25ea:
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x4200);
    *(undefined *)(param_1 + 0x13) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0xa00;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + -0x4000;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + 0x4000;
    }
    *(undefined4 *)(param_1 + 100) = 0x4c;
    uVar3 = FUN_080fe2f8(iVar4 - *(int *)(param_1 + 0x54),0x4c);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffda0;
    *(undefined4 *)(param_1 + 100) = 0x4b;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar4 = *(int *)(param_1 + 0x54);
      iVar6 = -0xa00;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54);
      iVar6 = 0xa00;
    }
    uVar2 = sub_08009A3C(iVar4 + iVar6,*(undefined4 *)(param_1 + 0x58));
    if ((uVar2 & 0xf) == 1) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_08017700(param_1,0x4201);
      *(undefined *)(param_1 + 0xe) = 4;
    }
    else {
      iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
        *(undefined *)(param_1 + 0xe) = 2;
      }
      iVar4 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0xff;
    local_18 = *(int *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0xc00;
    sub_080A2210(&local_18,*(byte *)(param_1 + 10) >> 4 & 1);
    local_18 = *(int *)(param_1 + 0x54) + 0xc00;
    local_14 = *(int *)(param_1 + 0x58) + 0xc00;
    sub_080A2210(&local_18,~(*(byte *)(param_1 + 10) >> 4) & 1);
    local_18 = *(int *)(param_1 + 0x54) + -0xc00;
    local_14 = *(int *)(param_1 + 0x58) + 0xc00;
    sub_080A2210(&local_18,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar2 = 0;
    do {
      sub_080A2264(param_1 + 0x54,uVar2 & 0xff);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    sub_08017700(param_1,0x4201);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0800471C(0x31);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

