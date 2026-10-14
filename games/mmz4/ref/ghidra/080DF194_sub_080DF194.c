// sub_080DF194 at 0x080DF194 (thumb)

/* WARNING: Removing unreachable block (ram,0x080df1e2) */
/* WARNING: Removing unreachable block (ram,0x080df216) */

undefined4 sub_080DF194(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\0') goto LAB_080df242;
  sub_0801CF00(param_1,0x6e06);
  pcVar5 = (char *)(param_1 + 0x74);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*pcVar5 == '\x01') goto LAB_080df1c4;
LAB_080df224:
    *(undefined *)(param_1 + 0x12) = 0;
    if (*pcVar5 == '\0') {
      uVar3 = 0xffffff00;
    }
    else {
      uVar3 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
  }
  else {
    if (*pcVar5 != '\0') goto LAB_080df224;
LAB_080df1c4:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    if (*pcVar5 == '\0') {
      *(undefined4 *)(param_1 + 100) = 0xfffffff2;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0xe;
    }
    *(undefined4 *)(param_1 + 0x68) = 6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080df242:
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1400);
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

