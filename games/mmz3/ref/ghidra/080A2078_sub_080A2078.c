// sub_080A2078 at 0x080A2078 (thumb)

undefined4 sub_080A2078(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 0x200) == 0) {
    if ((*puVar4 & 4) != 0) {
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_080B2484(2,param_1 + 0x54);
      sub_0800471C(0x35);
      goto LAB_080a20e6;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xe) == '\0') {
        sub_08017700(param_1,0x3e03);
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar6 = *(int *)(param_1 + 0x54);
          iVar5 = -0x6000;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x54);
          iVar5 = 0x6000;
        }
        *(undefined4 *)(param_1 + 100) = 0x1e;
        uVar3 = FUN_080fe2f8((iVar6 + iVar5) - *(int *)(param_1 + 0x54),0x1e);
        *(undefined4 *)(param_1 + 0x5c) = uVar3;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffc40;
        *(undefined4 *)(param_1 + 100) = 0x1d;
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (*(char *)(param_1 + 0xe) != '\x01') {
        return in_lr;
      }
      iVar6 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar6;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      sub_080177F4(param_1);
      sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  else {
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_080B2484(2,param_1 + 0x54);
LAB_080a20e6:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

