// sub_080B7750 at 0x080B7750 (thumb)

undefined4 sub_080B7750(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
      if (sVar2 != 0) {
        sub_08002B10(0x17f);
        *(char *)(param_1 + 0xb4) = '\x01';
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x60) = 0x80;
        local_24 = *(int *)(param_1 + 0x54);
        local_20 = *(int *)(param_1 + 0x58) + -0x800;
        sub_080CF4B8(&local_24,0,0);
        local_24 = *(int *)(param_1 + 0x54) + -0x200;
        local_20 = *(undefined4 *)(param_1 + 0x58);
        sub_080E7460(&local_24,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
        local_24 = *(int *)(param_1 + 0x54) + 0x200;
        local_20 = *(undefined4 *)(param_1 + 0x58);
        sub_080E7460(&local_24,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar4 = iVar3 - *(int *)(param_1 + 0xb8);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0xb8) - iVar3;
      }
      if (0xe00 < iVar4) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      }
      if (*(char *)(param_1 + 0x12) == '\0') {
        pcVar5 = (char *)(param_1 + 0xb5);
        if (*pcVar5 == '\0') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
          *pcVar5 = '\x01';
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          *pcVar5 = '\0';
        }
        cVar1 = '\x02';
      }
      else {
        cVar1 = *(char *)(param_1 + 0x12) + -1;
      }
      *(char *)(param_1 + 0x12) = cVar1;
    }
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xb4) = 0;
    sub_080B78C8(param_1);
  }
  return in_lr;
}

