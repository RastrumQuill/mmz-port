// sub_08063808 at 0x08063808 (thumb)

undefined4 sub_08063808(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  sub_08063ED0();
  if (*(char *)(param_1 + 0xd) == '\b') {
    sub_080644A4(param_1);
  }
  else if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) &&
          (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1e00),
          sVar1 == 0)) {
    iVar2 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x54) + iVar2;
      *(int *)(param_1 + 0x54) = iVar2;
      uVar3 = sub_0800A104(iVar2,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    piVar5 = (int *)(param_1 + 0xc0);
    if (*piVar5 == 0) {
      if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
        iVar2 = sub_080253D8(0,param_1,&DAT_08362338);
        *piVar5 = iVar2;
      }
      if (*piVar5 == 0) {
        iVar2 = sub_08063614(param_1);
        if (iVar2 != 0) {
          sub_08017700(param_1,0x1400);
          sub_080177F4(param_1);
          sub_08007390(param_1 + 0x74,&DAT_08362290);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        if ((*piVar5 != 0) &&
           (iVar2 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800),
           iVar2 != 0)) {
          iVar2 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
          iVar2 = *(int *)(param_1 + 0x54) + iVar2;
          *(int *)(param_1 + 0x54) = iVar2;
          iVar2 = sub_08009B28(iVar2,*(int *)(param_1 + 0x58) + 0x800);
          if (iVar2 != 0) {
            uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
            *(undefined4 *)(param_1 + 0x58) = uVar3;
          }
        }
        if ((*(int *)(param_1 + 0x58) - *(int *)(DAT_0202f5c0 + 0x58)) + 0x3000U < 0x6000) {
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar2 = *(int *)(param_1 + 0x54);
            iVar4 = *(int *)(DAT_0202f5c0 + 0x54);
          }
          else {
            iVar2 = *(int *)(DAT_0202f5c0 + 0x54);
            iVar4 = *(int *)(param_1 + 0x54);
          }
          *(int *)(param_1 + 0xbc) = iVar2 - iVar4;
        }
        else {
          *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
        }
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362248 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836226c + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
    }
    sub_08017700(param_1,0x1404);
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_083622a8);
    iVar2 = sub_08025794(*piVar5);
    if (iVar2 != 0) {
      sub_08007390(param_1 + 0x74,&DAT_08362290);
      *piVar5 = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080639EC(param_1);
  }
  return in_lr;
}

