// sub_08054D44 at 0x08054D44 (thumb)

undefined4 sub_08054D44(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((*(uint *)(param_1 + 0xbc) & 3) == 1) {
      local_14 = *(int *)(param_1 + 0x4c) + 0x400 + (uint)(0 < *(int *)(param_1 + 0xc0)) * -0x800;
      local_10 = *(int *)(param_1 + 0x50) + -0x1000;
      sub_080033F0(param_1 + 0x6c,4);
      sub_0808C630(param_1);
      uVar1 = 0x18;
    }
    else {
      sub_080033F0(param_1 + 0x6c,2);
      if ((*(uint *)(param_1 + 0xbc) & 2) == 0) {
        uVar1 = 0x10;
      }
      else {
        uVar1 = 1;
      }
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if ((cVar2 == '\0') ||
       (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
       cVar2 != '\0')) {
      local_14 = *(int *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50) + -0x800;
      sub_0808827C(1,&local_14);
      sub_0808C678(param_1,&local_14);
LAB_08054f22:
      sub_08001EAC(2);
      sub_08015698(4,param_1 + 0x4c);
      *(undefined *)(param_1 + 0xd) = 4;
    }
    break;
  case 2:
    local_14 = *(int *)(param_1 + 0x4c) + 0x400 + (uint)(0 < *(int *)(param_1 + 0xc0)) * -0x800;
    local_10 = *(int *)(param_1 + 0x50) + -0x1000;
    if ((*(uint *)(param_1 + 0xbc) & 3) == 1) {
      sub_080033F0(param_1 + 0x6c,0xc);
      sub_0808C6D4(param_1);
      uVar1 = 0x18;
    }
    else {
      sub_0808C71C(param_1,&local_14);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54) * 0xc0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar3 >> 8;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    sub_08054724(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      local_14 = *(int *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50) + -0x1000;
      sub_0808827C(1,&local_14);
      goto LAB_08054f22;
    }
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  default:
    goto switchD_08054d5a_caseD_5;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_08054d5a_caseD_5:
  return in_lr;
}

