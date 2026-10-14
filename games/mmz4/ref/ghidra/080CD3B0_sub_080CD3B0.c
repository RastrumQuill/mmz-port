// sub_080CD3B0 at 0x080CD3B0 (thumb)

undefined4 sub_080CD3B0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  *(char *)(iVar4 + 0xd7) = *(char *)(iVar4 + 0xd7) + '\x01';
  uVar3 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x800;
  }
  else {
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + 0x800 + (uint)*(byte *)(param_1 + 0x10) * -0x2000;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) goto LAB_080cd530;
      if (*(char *)(param_1 + 0x10) != '\0') goto LAB_080cd4cc;
LAB_080cd4dc:
      sub_0801CF00(param_1,0xd608);
    }
    else {
      if (*(char *)(iVar4 + 0xda) != '\0') goto LAB_080cd530;
      if (*(char *)(param_1 + 0x10) == '\0') goto LAB_080cd4dc;
LAB_080cd4cc:
      sub_0801CF00(param_1,0xd609);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) && (*(char *)(param_1 + 0x73) == '\x03')) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
        sub_080CD53C(param_1);
        return in_lr;
      }
      goto LAB_080cd530;
    }
    if ((bVar1 != 0) ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
    goto LAB_080cd530;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_0801CF00(param_1,0xd606);
    }
    else {
      sub_0801CF00(param_1,0xd607);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088634e8,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080cd530:
  sub_0801CFF0(param_1);
  return in_lr;
}

