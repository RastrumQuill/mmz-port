// sub_0809A79C at 0x0809A79C (thumb)

undefined4 sub_0809A79C(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) && (*(byte *)(iVar5 + 0xc) < 2)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(iVar5 + 0x54) +
                *(int *)(&DAT_0885daa8 + (*(byte *)(param_1 + 0x11) & 7) * 4);
      }
      else {
        iVar4 = *(int *)(iVar5 + 0x54) -
                *(int *)(&DAT_0885daa8 + (*(byte *)(param_1 + 0x11) & 7) * 4);
      }
      *(int *)(param_1 + 0x54) = iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x700;
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == -1) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08005760(param_1 + 0x74,&DAT_0885da4c,param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(byte *)(param_1 + 0x11) < 0x10) {
          sub_08099C0C(iVar5,5,*(byte *)(param_1 + 0x11) + 8);
        }
        sub_0801CF00(param_1,0x6101);
        if (*(char *)(param_1 + 0x11) == '\0') {
          sub_08002B10(0x120);
        }
        sub_08002B10(0x13a);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) goto LAB_0809a8cc;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    }
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      return in_lr;
    }
    sVar2 = *(short *)(param_1 + 0xbe);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0xbe) = sVar2 + -1;
      return in_lr;
    }
    sVar2 = sub_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      return in_lr;
    }
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0x12) = 1;
  }
LAB_0809a8cc:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_08099CF4(param_1);
  return in_lr;
}

